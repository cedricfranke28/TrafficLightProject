/** @file ITrafficLightInput.h */
#ifndef _ITRAFFICLIGHTINPUT_H_
#define _ITRAFFICLIGHTINPUT_H_

#include <iostream>

using namespace std;

/**   This is the interface for class creation of the traffic light input.
 *  
 *  @author 		Cedric Franke
 *  @date		05.2022
 */
class ITrafficLightInput
{
public: 
  ITrafficLightInput();
  virtual char IInput() = 0;
};

#endif
