#include "TrafficLightController.h"

TrafficLight::TrafficLight(ITrafficLightOutput* pDeliverController) : pOutputTrafficLightController(pDeliverController), Operation(pDeliverController), Flashing(pDeliverController)
{
  Operation.pNextState = &Flashing;
  Flashing.pNextState = &Operation;
  pCurrentState = &Operation;
  pCurrentState->iOS_Entry;
}

bool TrafficLight::Controller(char E)
{
	bool ReturnValue = true;
	switch (toupper(E))
	{
	case 'B':
		pCurrentState->iOS_Exit();
		pCurrentState = pCurrentState->pFollowingState;
		pCurrentState->iOS_Entry();
		break;
	case 'X':
		pCurrentState->iOS_Exit();
		pCurrentState = false;
	default:
		pCurrentState->iOS_Execution(E);
	}
	
	return ReturnValue;
}