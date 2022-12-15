#include <assert.h>
#include <iostream>
#include "checker.hpp"
using namespace std;

bool batteryTempIsOk(float temperature, float UppTempLim, float LowTempLim) 
{
  UppLim = 45;
  LowLim = 0;
  if(temperature < UppLim || temperature > LowLim){  
    return false;
  }
    else {
    return true;
  }
}

bool SocisOk(float soc, float UppSocLim, float LowSocLim)
{
 UppSocLim = 80;
 LowSocLim = 20
 
if(soc < UppSocLim || soc > LowSocLim) {
    return false;
  }
  else {
  return true;
}
}

bool ChargeRateIsOk(float ChargeRate, float BattLim)
{
  BattLim = 0.8;
if(chargeRate > BattLim) {
    return false;
  }
  else{
    return true;
  }
}

int main() {
  test_checker();
}
