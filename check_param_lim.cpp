#include <assert.h>
#include <iostream>
#include "check_param_lim.hpp"

using namespace std;

bool batteryTempIsOk(float temperature, float UppTempLim, float LowTempLim) 
{

  if(temperature < LowTempLim || temperature > UppTempLim){  
    return false;
  }
    else {
    return true;
  }
}

bool SocisOk(float soc, float UppSocLim, float LowSocLim)
{
 
if(soc < LowSocLim || soc > UppSocLim) {
    return false;
  }
  else {
  return true;
}
}

bool ChargeRateIsOk(float ChargeRate, float BattLim)
{
if(ChargeRate > BattLim) {
    return false;
  }
  else{
    return true;
  }
}

int main() {
  test_checker();
  
}
