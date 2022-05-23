/** @file TrafficLightController.h */
#ifndef _INOPERATION_H_
#define _INOPERATION_H_

#include "TLS_Red.h"
#include "TLS_RedAmber.h"
#include "TLS_Green.h"
#include "TLS_Amber.h"
#include "IOperationState.h"

/** Regulates the status change of the various traffic light phases
 *  
 *  @author 		Cedric Franke
 *  @date		05.2022
 */
class OS_InOperation : public IOperationState
{

public:
    OS_InOperation(ITrafficLightOutput *pDeliverInOperation);

    void Entry();
    void Exit();
    void Execution(char);

private:
    TLS_Red Red;
    TLS_RedAmber RedAmber;
    TLS_Green Green;
    TLS_Amber Amber;

    ITrafficLightState *CurrentState;
};

#endif