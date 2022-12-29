#include "PushArr.h"

PushArr::PushArr(std::string _opnd) : opnd(_opnd) { }

int PushArr::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    dataMemory* dm = dataMemory::getSingleton();
    int opndInt = stoi(opnd);
    int e = opndInt + rs->getOff();

    int val = dm->getValue(e);
    
    rs->put(val);
    
    return pc+1;
}