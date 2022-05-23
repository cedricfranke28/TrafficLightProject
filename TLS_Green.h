/** @file TLS_Green.h */
#ifndef _GREEN_H_
#define _GREEN_H_

#include "ITrafficLightState.h"

/** Represents the status of a green traffic light 
 *  
 *  @author 		Cedric Franke
 *  @date		05.2022
 */
class TLS_Green : public ITrafficLightState
{
public:
TLS_Green(ITrafficLightOutput *pDeliverGreen) : ITrafficLightState(pDeliverGreen){}

    void ITLS_Entry() { pOutputState->IOutputGreen(); }
    void ITLS_Exit() { pOutputState->IOff(); }
    void ITLS_Execution(char){}
};

#endif