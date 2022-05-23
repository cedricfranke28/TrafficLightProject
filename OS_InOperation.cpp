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

void OS_InOperation::Entry()
{
  cout << "Traffic light in operation" << endl;
  CurrentState = &Red;
  CurrentState->Entry();
};

void OS_InOperation::Execution(char E)
{
  switch (toupper(E))
	{
		case 'F':
			CurrentState->Exit();
			CurrentState = CurrentState->pFollowingState;
			CurrentState->Entry();
			break;
		default:
			CurrentState->Execution(E);
	}
}

void OS_InOperation::Exit()
{
  CurrentState->Exit();
};