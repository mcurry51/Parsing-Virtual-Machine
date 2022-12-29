#include "JumpZero.h"

JumpZero::JumpZero(std::string _opnd) : opnd(_opnd) { }

int JumpZero::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    int opndInt = stoi(opnd);
    int x = rs->getOff();
    if(x == 0) {
        return opndInt;
    }
    else {
        return pc+1;
    }
}