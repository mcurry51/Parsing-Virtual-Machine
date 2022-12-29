#include "GoSub.h"

GoSub::GoSub(std::string _opnd) {
    opnd = _opnd;
}

int GoSub::execute(int& pc) {
    ReturnAddress* ra = ReturnAddress::getSingleton();
    int retAddr = pc + 1;
    ra->put(retAddr);

    int opndInt = stoi(opnd);
    pc = opndInt;

    return pc;

}