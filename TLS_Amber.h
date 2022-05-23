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

    void ITLS_Entry() { pOutputState->IOutputAmber(); }
    void ITLS_Exit() { pOutputState->IOff(); }
    void ITLS_Execution(char){}
};

#endif