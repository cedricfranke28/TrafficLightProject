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
    void IOutputRed() { LED.LED_Red(true); }
    void IOutputRedAmber();
    void IOutputAmber() { LED.LED_Amber(true); }
    void IOutputGreen() { LED.LED_Green(true); }
    void IOutputFlashing() { LED.Toggle_Amber(); }
    void IOff() { LED.LED_All(false, false, false); }

private:
    LED led;
	
};

