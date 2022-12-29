#include "Negate.h"

int Negate::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    int x = rs->getOff();
    int tot = -1 * x;
    rs->put(tot);

    return pc+1;
}