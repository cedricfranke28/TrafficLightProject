/** @file TLS_Amber.h */
#ifndef _AMBER_H_
#define _AMBER_H_

#include "ITrafficLightState.h"

/**   Represents the status of a amber traffic light
 *  
 *  @author 		Cedric Franke
 *  @date		05.2022
 */
class TLS_Amber : public ITrafficLightState
{
public:
  TLS_Amber(ITrafficLightOutput *pDeliverAmber) : ITrafficLightState(pDeliverAmber){}

    void Entry() { pOutputState->OutputAmber(); }
    void Exit() { pOutputState->Off(); }
    void Execution(char){}
};

#endif