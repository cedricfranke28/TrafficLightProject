/** @file TrafficLightController.h */
#ifndef _TRAFFICLIGHTCONTROLLER_H_
#define _TRAFFICLIGHTCONTROLLER_H_

#include <iostream>
#include "OS_OutOfOperation.h"
#include "OS_InOperation.h"
#include "IOperationState.h"
#include "ITrafficLightOutput.h"

using namespace std;

/** This class controls the switching between the operating states of the traffic light  
 *  
 *  @author 		Cedric Franke
 *  @date		05.2022
 */
class TrafficLight
{
public: 
  TrafficLight(ITrafficLightOutput* pDeliverController = nullptr);
  bool Controller(char e);

private: 
   ITrafficLightOutput* pOutputTrafficLightController;
   InOperation Operation;
   OutOfOperation Flashing;
   iOperationMode* pCurrentState;
};

#endif