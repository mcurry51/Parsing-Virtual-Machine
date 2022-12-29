#include "Swap.h"

int Swap::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    int x = rs->getOff();
    int y = rs->getOff();
    rs->put(y);
    rs->put(x);

    return pc+1;
}