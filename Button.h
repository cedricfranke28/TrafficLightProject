/** @file Button.h*/

#ifndef _BUTTON_H_
#define _BUTTON_H_
#include "GPIO.h"

/** 
 *  
 *  @author 		Niklas Stein
 *  @date		05.2022

 */

class Button
{
private:
	bool StateA = false;;
	bool StateB = false;
	bool OutputX = false;
	int ButtonA;	/**<Pin 3 1.Taster D3 */
	int ButtonB;	/**<Pin 5 2.Taster D4 */
	GPIO PortB;

public:
	Button() : PortB(0x40020400), ButtonA(3), ButtonB(5)
	{
		PortB.select_datadirection(ButtonA, false);
		PortB.select_datadirection(ButtonB, false);
	}

	bool RequestA();

	bool RequestB();

	char RequestButton();
		
};

#endif