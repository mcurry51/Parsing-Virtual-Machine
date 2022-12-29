#include "Pop.h"

int Pop::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    int x = rs->getOff();

    return pc+1;
}