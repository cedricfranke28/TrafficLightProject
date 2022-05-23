/** @file TLO_HardwareOutput.h */

#pragma once
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
    TLO_HardwareOutput();
    void OutputRed() { led.LED_Red(true); }
    void OutputRedAmber() { led.LED_Red(true); led.LED_Amber(true); }
    void OutputAmber() { led.LED_Amber(true); }
    void OutputGreen() { led.LED_Green(true); }
    void OutputFlashing() { led.Toggle_Amber(); }
    void Off() { led.LED_All(false, false, false); }

private:
    UserLEDs led;
	
};

