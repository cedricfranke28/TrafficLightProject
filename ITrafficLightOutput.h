/** @file ITrafficLightOutput.h */
#ifndef _ITRAFFICLIGHTOUTPUT_H_
#define _ITRAFFICLIGHTOUTPUT_H_

#include <iostream>

using namespace std;

/**   This is the interface for class creation of the traffic light output.
 *  
 *  @author 		Cedric Franke
 *  @date		05.2022
 */
class ITrafficLightOutput
{
public:
   ITrafficLightOutput();
   virtual void IOutputRed() =0;
   virtual void IOutputRedAmber() =0;
   virtual void IOutputAmber() =0;
   virtual void IOutputGreen() =0;
   virtual void IOutputFlashing() =0;
   virtual void IOff() = 0;
};

#endif