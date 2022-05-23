#include "TrafficLightController.h"

TrafficLightController::TrafficLightController(ITrafficLightOutput* pDeliverController) : pOutputTrafficLightController(pDeliverController), Operation(pDeliverController), Flashing(pDeliverController)
{
  Operation.pFollowingState = &Flashing;
  Flashing.pFollowingState = &Operation;
  pCurrentState = &Operation;
  pCurrentState->IOS_Entry();
}

bool TrafficLightController::Controller(char E)
{
	bool ReturnValue = true;
	switch (toupper(E))
	{
	case 'B':
		pCurrentState->IOS_Exit();
		pCurrentState = pCurrentState->pFollowingState;
		pCurrentState->IOS_Entry();
		break;
	case 'X':
		pCurrentState->IOS_Exit();
		ReturnValue = false;
	default:
		pCurrentState->IOS_Execution(E);
	}
	
	return ReturnValue;
}