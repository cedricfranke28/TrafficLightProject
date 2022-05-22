/** @file TrafficLightController.h */
#ifndef _TRAFFICLIGHTCONTROLLER_H_
#define _TRAFFICLIGHTCONTROLLER_H_

#include "OS_OutOfOperation.h"
#include "OS_InOperation.h"
#include "IOperationState.h"
#include "ITrafficLightOutput.h"

#include <iostream>

using namespace std;

/** This class controls the switching between the operating states of the traffic light  
 *  
 *  @author 		Cedric Franke
 *  @date		05.2022
 */
class TrafficLightController
{
public: 
  TrafficLightController(ITrafficLightOutput* pDeliverController = nullptr);
  bool Controller(char e);

private: 
   ITrafficLightOutput* pOutputTrafficLightController;
   OS_InOperation Operation;
   OS_OutOfOperation Flashing;
   IOperationState* pCurrentState;
};

#endif