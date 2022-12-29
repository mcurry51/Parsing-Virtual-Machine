#include "Prints.h"

Prints::Prints(std::string _opnd) : opnd(_opnd) { }

int Prints::execute(int& pc) {
    stringTable* sT = stringTable::getSingleton();
    sT->put(opnd);
    std::string phrase = sT->getOff(opnd); 
    std::cout << phrase << std::endl;
    
    return pc+1;
}