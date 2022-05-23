/** @file OS_OutOfOperation.h */
#ifndef _OUTOFOPERATION_H_
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
  OS_OutOfOperation(ITrafficLightOutput *pDeliverOutOfOperation) : IOperationState(pDeliverOutOfOperation){};

    void Entry();
    void Exit();
    void Execution(char) { pOutputOperationState->OutputFlashing(); };
};

#endif