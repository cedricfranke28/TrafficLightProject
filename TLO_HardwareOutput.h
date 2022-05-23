/** @file TLO_HardwareOutput.h */

#ifndef _HARDWAREOUTPUT_H_
#define _HARDWAREOUTPUT_H_
#include "ITrafficLightOutput.h"
#include "LED.h"

/** Class to show output on hardware. 
 *
 *  @author Niklas Stein
 *  @date   05.2022
 */

class TLO_HardwareOutput :public ITrafficLightOutput
{
public:
  TLO_HardwareOutput() {};
    void OutputRed() { led.redLED(true); }
    void OutputRedAmber() { led.redLED(true); led.amberLED(true); }
    void OutputAmber() { led.amberLED(true); }
    void OutputGreen() { led.greenLED(true); }
    void OutputFlashing() { led.amberLEDToggle(true); }
    void Off() { led.allLEDs(false); }

private:
    UserLEDs led;
	
};
#endif

