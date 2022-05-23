/** @file TLO_SoftwareOutput.h */

#ifndef _SOFTWAREOUTPUT_H_
#define _SOFTWAREOUTPUT_H_
#include "ITrafficLightOutput.h"
#include <iostream>

using namespace std;

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
    void OutputFlashing() {cout << "Flashing amber led" << endl;} 
    void Off() {}
};

#endif