#include <assert.h>
#include <iostream>
#include "checker.hpp"
#include "test.hpp"
using namespace std;

bool batteryTempIsOk(float temperature, float UppTempLim, float LowTempLim) 
{

  if(temperature < UppLim || temperature > LowLim){  
    return false;
  }
    else {
    return true;
  }
}

bool SocisOk(float soc, float UppSocLim, float LowSocLim)
{
 
if(soc < UppSocLim || soc > LowSocLim) {
    return false;
  }
  else {
  return true;
}
}

bool ChargeRateIsOk(float ChargeRate, float BattLim)
{
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
