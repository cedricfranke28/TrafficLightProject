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
    TLS_RedAmber(ITrafficLightOutput *pDeliverRedAmber) : ITrafficLightState(pDeliverRedAmber);

    void IS_Entry() { pOutputTrafficLightState->iOutputRedAmber(); };
    void IS_Exit() { pOutputTrafficLightState->iOff(); };
    void IS_Execution(char){};
};

#endif