#include "PushScal.h"
PushScal::PushScal(std::string _opnd) : opnd(_opnd) {}


int PushScal::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    dataMemory* dm = dataMemory::getSingleton();
    int opndInt = stoi(opnd);
    
    int val = dm->getValue(opndInt);
    rs->put(val);
    
    return pc+1;
}