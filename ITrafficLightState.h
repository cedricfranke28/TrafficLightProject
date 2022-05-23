/** @file ITrafficLightState.h */
#ifndef _ITRAFFICLIGHTSTATE_H_
#define _ITRAFFICLIGHTSTATE_H_

#include "ITrafficLightOutput.h"

#include <iostream>

using namespace std;

/**   This is the interface for class creation of traffic light states
 *  
 *  @author 		Cedric Franke
 *  @date		05.2022
 */
class ITrafficLightState
{
public:
  ITrafficLightState(ITrafficLightOutput *pDeliverState = nullptr) : pOutputState(pDeliverState){}
  
  virtual void Entry() = 0;
  virtual void Exit() = 0;
  virtual void Execution(char) = 0;
  
  ITrafficLightState* pFollowingState;
  ITrafficLightOutput* pOutputState;
};

#endif
