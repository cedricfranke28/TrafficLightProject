/** @file TLS_Red.h */
#ifndef _RED_H_
#define _RED_H_

#include "ITrafficLightState.h"

/** Represents the status of a red traffic light.
 *  
 *  @author 		Cedric Franke
 *  @date		05.2022
 */
class TLS_Red : public ITrafficLightState
{
public:
    TLS_Red(ITrafficLightOutput *pDeliverRed) : ITrafficLightState(pDeliverRed);

    void IS_Entry() { pOutputTrafficLightState->iOutputRed(); };
    void IS_Exit() { pOutputTrafficLightState->iOff(); };
    void IS_Execution(char){};
};

#endif