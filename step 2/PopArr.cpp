#include "PopArr.h"

PopArr::PopArr(std::string _opnd) : opnd(_opnd) { }

int PopArr::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    dataMemory* dm = dataMemory::getSingleton();
    
    // int x = rs.pop();
    int opndInt = stoi(opnd);
    int e = opndInt + rs->getOff();

    int val = rs->getOff();
    dm->setValue(e, val);

    return pc+1;
}