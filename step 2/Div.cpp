#include "Div.h"

int Div::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    int x = rs->getOff();
    int y = rs->getOff();
    int sum = y / x;
    rs->put(sum);

    return pc+1;
}