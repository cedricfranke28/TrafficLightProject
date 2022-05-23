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
    void IOutputRed() { led.LED_Red(true); }
    void IOutputRedAmber() { led.LED_Red(true); led.LED_Amber(true); }
    void IOutputAmber() { led.LED_Amber(true); }
    void IOutputGreen() { led.LED_Green(true); }
    void IOutputFlashing() { led.Toggle_Amber(); }
    void IOff() { led.LED_All(false, false, false); }

private:
    LED led;
	
};

