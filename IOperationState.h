/** @file IOperationState.h */
#ifndef _IOPERATIONSTATE_H_
#define _IOPERATIONSTATE_H_

#include "ITrafficLightOutput.h"

#include <iostream>

using namespace std;

/** This is the interface for class creation of traffic light operating states.
 *  
 *  @author 		Cedric Franke
 *  @date		05.2022
 */
class IOperationState
{
  public:
    IOperationState(ITrafficLightOutput *pDeliverOperationState = nullptr) : pOutputOperationState(pDeliverOperationState){}
      virtual void Entry() = 0;
      virtual void Exit() = 0;
      virtual void Execution(char) = 0;
      IOperationState *pFollowingState;
      ITrafficLightOutput *pOutputOperationState;
};

#endif
