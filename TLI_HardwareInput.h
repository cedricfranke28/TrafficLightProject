/** @file TLI_HardwareInput.h */

#pragma once
#include "ITrafficLightInput.h"
#include "Button.h"

/** Hardware-input management  
 *  
 *  @author Niklas Stein
 *  @date   05.2022
 */

class TLI_HardwareInput :	public ITrafficLightInput
{
private:
	Button button;

public:
      TLI_HardwareInput() { }

      char Input() { return button.ButtonRequest(); };
	
};