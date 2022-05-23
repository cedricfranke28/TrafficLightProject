/** @file TLS_RedAmber.h */
#ifndef _REDAMBER_H_
#define _REDAMBER_H_

#include "ITrafficLightState.h"

/** Represents the status of a red-amber traffic light. 
 *
 *  @author Cedric Franke
 *  @date   05.2022
 */
class TLS_RedAmber : public ITrafficLightState
{
public:
  TLS_RedAmber(ITrafficLightOutput *pDeliverRedAmber) : ITrafficLightState(pDeliverRedAmber){}

    void Entry() { pOutputState->OutputRedAmber(); }
    void Exit() { pOutputState->Off(); }
    void Execution(char){}
};

#endif