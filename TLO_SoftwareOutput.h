/** @file TLO_SoftwareOutput.h */

#pragma once
#include "ITrafficLightOutput.h"

/** Class to show output in Terminal. 
 *  
 *  @author Niklas Stein
 *  @date 05.2022
 */

class TLO_SoftwareOutput :public ITrafficLightOutput
{
public:
    TLO_SoftwareOutput(){ }
	
    void IOutputRed() { cout << "Trafficlight: red" << endl; }
    void IOutputRedAmber() { cout << "Trafficlight: redamber" << endl; }
    void IOutputAmber() { cout << "Trafficlight: amber" << endl; }
    void IOutputGreen() { cout << "Trafficlight: green" << endl; }
    void IOutputFlashing();
    void IOff() { cout << "Trafficlight: off" << endl; }
};

