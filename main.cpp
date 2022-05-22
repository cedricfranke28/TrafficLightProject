
#include "TrafficLightController.h"
#include "TLI_HardwareInput.h"
#include "TLO_HardwareOutput.h"
#include "TLI_SoftwareInput.h"
#include "TLO_SoftwareOutput.h"
#include <iostream>

using namespace std;


int main()
{
  cout << "Welcome to our traffic light control." << endl;
  cout << "You start with the red traffic light phase." << endl;
  cout << "To change the mode, please enter B." << endl;
  cout << "To change the traffic light phase, please enter F, only possible in the status in operation." << endl;
  cout << "To exit the traffic light control, please press X." << endl;
  
  char Input = NULL;
  
  #ifdef _HARDWAREPRESENT
    ITrafficLightInput* pTrafficLightInput = new TLI_HardwareInput;
    ITrafficLightOutput* pTrafficLightOutput = new TLO_HardwareOutput;
  #else
    ITrafficLightInput* pTrafficLightInput = new TLI_SoftwareInput;
    ITrafficLightOutput* pTrafficLightOutput = new TLO_SoftwareOutput;
  #endif
  
  TrafficLight TrafficLight(pTrafficLightOutput);
  do
  {
    Input = pTrafficLightInput->iInput();
  }
  while(TrafficLight.Controller(Input));
  
  return 0;
}
