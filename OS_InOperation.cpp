/** @file TrafficLightController.h */

#include "OS_InOperation.h"

OS_InOperation::OS_InOperation(ITrafficLightOutput* pDeliverInOperation): Red(pOutputOperationState), RedAmber(pOutputOperationState), Amber(pOutputOperationState), Green(pOutputOperationState), IOperationState(pDeliverInOperation)
{
  Red.pFollowingState = &RedAmber;
  RedAmber.pFollowingState = &Green;
  Green.pFollowingState = &Amber;
  pCurrentState = &Red;
};

void OS_InOperation::IOS_Entry()
{
  cout << "Traffic light in operation" << endl;
  pCurrentState = &Red;
  pCurrentState->IS_Entry();
};

void OS_InOperation::IOS_Execution(char E)
{
  switch (toupper(E))
	{
		case 'F':
			pCurrentState->IS_Exit();
			pCurrentState = pCurrentState->pFollowingState;
			pCurrentState->IS_Entry();
			break;
		default:
			pCurrentState->IS_Execution(E);
	}
}