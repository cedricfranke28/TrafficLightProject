/** @file TLO_SoftwareOutput.cpp */

#include "TLO_SoftwareOutput.h"

void TLO_SoftwareOutput::OutputFlashing()
{
  sleep(3000);
  cout << "Flashing amber led" << endl;
  sleep(3000);
};