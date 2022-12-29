#include "Pushi.h"

PushI::PushI(std::string _opnd) : opnd(_opnd) { }

int PushI::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    int opndInt = std::stoi(opnd);
    rs->put(opndInt);

    return pc+1;    
}