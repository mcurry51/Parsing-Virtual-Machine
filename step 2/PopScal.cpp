#include "PopScal.h"

PopScal::PopScal(std::string _opnd) : opnd(_opnd) {}

int PopScal::execute(int& pc) {
    RuntimeStack* rs = RuntimeStack::getSingleton();
    dataMemory* dm = dataMemory::getSingleton();

    int opndInt = std::stoi(opnd);
    int x = rs->getOff();
    dm->setValue(opndInt, x);

    return pc + 1;
}