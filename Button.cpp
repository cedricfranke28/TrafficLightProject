/** @file Button.cpp */
#include "Button.h"


bool Button::RequestA()
{
	bool Request1 = PortB.read_port();
	for (int i = 0; i < 50000; i++) {}
	bool Request2 = PortB.read_port();
	if ((Request1 & Request2) & !StateA)
	{
		cout << "State: " << StateA << endl;
		StateA = true;
		return  true;
	}
	else
	{
		cout << "State: " << StateA << endl;
		StateA = false;
		return  false;
	}
}


bool Button::RequestB()
{
	bool Request1 = PortB.read_port();
	for (int i = 0; i < 50000; i++) {}
	bool Request2 = PortB.read_port();
	if ((Request1 & Request2) & !StateB)
	{
		cout << "State: " << StateB << endl;
		StateB = true;
		return  true;
	}
	else
	{
		cout << "State: " << StateB << endl;
		StateB = false;
		return  false;
	}
}


char Button::RequestButton()
{
 
	bool Request1 = PortB.read_port();
	bool Request2 = PortB.read_port();
	for (int i = 0; i < 50000; i++) {}

	bool Request3 = PortB.read_port();
	bool Request4 = PortB.read_port();


	
	if ((Request1 & Request3 & !StateA) & !(Request2 & Request4))
	{

		StateA = true;
		StateB = false;
		return 'B';
	}
	else if (!(Request1 & Request3) & (Request2 & Request4 & !StateB))
	{
		StateA = false;
		StateB = true;
		return 'F';
	}
	else if (((Request1 & Request3 & !StateA) & (Request2 & Request4 & !StateB) || (Request1 & Request3 & StateB) || (Request2 & Request4 & StateA)) & !OutputX)
	{
		StateA = true;
		StateB = true;
		OutputX = true;
		return 'X';
	}

	else 
	{
		if (!(Request1 & Request3))
		{
			StateA = false;
		}
		if (!(Request2 & Request4))
		{
			StateB = false;
		}
		if (!(Request1 & Request3) & !(Request2 & Request4)) 
		{
			OutputX = false;
		}
		return 0;
	}

}