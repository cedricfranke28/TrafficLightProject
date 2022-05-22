/** @file TLI_SoftwareInput.h */

#pragma once
#include "ITrafficLightInput.h"

/** Terminal-input management.  
 *  
 *  @author Niklas Stein
 *  @date 05.2022

 */

class TLI_SoftwareInput :	public ITrafficLightInput
{
private:
	char CharacterInput = NULL;

public:
	TLI_SoftwareInput(){ }

	char IInput() ;
};