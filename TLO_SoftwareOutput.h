/** @file TLO_SoftwareOutput.h */

#pragma once
#include "ITrafficLightOutput.h"
#include <windows.h>

/** Class to show output in Terminal. 
 *  
 *  @author Niklas Stein
 *  @date 05.2022
 */

class TLO_SoftwareOutput :public ITrafficLightOutput
{
public:
    TLO_SoftwareOutput(){ }
	
    void OutputRed() { cout << "Trafficlight: red" << endl; }
    void OutputRedAmber() { cout << "Trafficlight: redamber" << endl; }
    void OutputAmber() { cout << "Trafficlight: amber" << endl; }
    void OutputGreen() { cout << "Trafficlight: green" << endl; }
    void OutputFlashing();
    void Off() { cout << "Trafficlight: off" << endl; }
};

