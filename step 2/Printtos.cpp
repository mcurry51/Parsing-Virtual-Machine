#include "Printtos.h"

int Printtos::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    int x = rs->getOff();
    std::cout << x << std::endl;

    return pc+1;
}