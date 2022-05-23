/** @file TLI_SoftwareInput.h */

#ifndef _SOFTWAREINPUT_H_
#define _SOFTWAREINPUT_H_
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

	char Input(){	cin >> CharacterInput; return CharacterInput;	};
};

#endif