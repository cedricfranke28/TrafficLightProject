/** @file OS_OutOfOperation.h */
#ifdef _OUTOFOPERATION_H_
#define _OUTOFOPERATION_H_

#include "IOperationState.h"

/** Operationstate out of operation.
 *  The method called during execution depends on the selected output method.
 *  
 *  @author 		Cedric Franke
 *  @date		05.2022
 */
class OS_OutOfOperation : public IOperationState
{

public:
    OS_OutOfOperation(ITrafficLightOutput *pDeliverOutOfOperation) : IOperationState(pDeliverOutOfOperation);

    void IOS_Entry();
    void IOS_Exit();
    void IOS_Execution(char) { pOutputOperationState->IOutputFlashing(); };
};

#endif