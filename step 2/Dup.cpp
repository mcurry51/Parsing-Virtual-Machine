#include "Dup.h"

int Dup::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    int x = rs->getOff();
    rs->put(x);
    rs->put(x);

    return pc+1;
}