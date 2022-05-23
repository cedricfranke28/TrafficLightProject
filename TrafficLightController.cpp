#include "TrafficLightController.h"

TrafficLightController::TrafficLightController(ITrafficLightOutput* pDeliverController) : pOutputTrafficLightController(pDeliverController), Operation(pDeliverController), Flashing(pDeliverController)
{
  Operation.pFollowingState = &Flashing;
  Flashing.pFollowingState = &Operation;
  pCurrentState = &Operation;
  pCurrentState->Entry();
}

bool TrafficLightController::Controller(char E)
{
	bool ReturnValue = true;
	switch (toupper(E))
	{
	case 'B':
		pCurrentState->Exit();
		pCurrentState = pCurrentState->pFollowingState;
		pCurrentState->Entry();
		break;
	case 'X':
		pCurrentState->Exit();
		ReturnValue = false;
	default:
		pCurrentState->Execution(E);
	}
	
	return ReturnValue;
}