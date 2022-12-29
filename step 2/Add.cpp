#include "Add.h"

int Add::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    int x = rs->getOff();
    int y = rs->getOff();
    int sum = x + y;
    rs->put(sum);
    
    return pc+1;
}