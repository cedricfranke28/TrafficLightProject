/** @file TrafficLightController.h */

#include "OS_InOperation.h"

OS_InOperation::OS_InOperation(ITrafficLightOutput* pDeliverInOperation) : Red(pOutputOperationState), RedAmber(pOutputOperationState), Amber(pOutputOperationState), Green(pOutputOperationState), IOperationState(pDeliverInOperation)
{
  Red.pFollowingState = &RedAmber;
  RedAmber.pFollowingState = &Green;
  Green.pFollowingState = &Amber;
  Amber.pFollowingState = &Red;
  CurrentState = &Red;
};

void OS_InOperation::IOS_Entry()
{
  cout << "Traffic light in operation" << endl;
  CurrentState = &Red;
  CurrentState->ITLS_Entry();
};

void OS_InOperation::IOS_Execution(char E)
{
  switch (toupper(E))
	{
		case 'F':
			CurrentState->ITLS_Exit();
			CurrentState = CurrentState->pFollowingState;
			CurrentState->ITLS_Entry();
			break;
		default:
			CurrentState->ITLS_Execution(E);
	}
}

void OS_InOperation::IOS_Exit()
{
  CurrentState->ITLS_Exit();
};