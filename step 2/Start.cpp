#include "Start.h"

Start::Start(std::string _opnd) : opnd(_opnd) { }

int Start::execute(int& pc) {
   //add stack frame of size opnd to dataMemory
    dataMemory* dM = dataMemory::getSingleton();
    int opndInt = stoi(opnd);
    dM->resizeStack(opndInt);

    return pc +1; 
}