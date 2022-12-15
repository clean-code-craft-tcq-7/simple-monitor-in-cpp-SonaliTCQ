#include <assert.h>
#include "checker.hpp"

void test_checker()
{
assert(batteryTempIsOk(50, 45, 0) == false);
assert(batteryTempIsOk(25, 45, 0) == true);

assert(SocisOk(60, 80, 0) == true);
assert(SocisOk(90, 80, 0) == false));    
  
assert(ChargeRateIsOk(20, 80) == true);
assert(ChargeRateIsOk(90, 80) == false);
  
}
