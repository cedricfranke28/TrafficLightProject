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
   virtual void OutputRed() =0;
   virtual void OutputRedAmber() =0;
   virtual void OutputAmber() =0;
   virtual void OutputGreen() =0;
   virtual void OutputFlashing() =0;
   virtual void Off() = 0;
};

#endif