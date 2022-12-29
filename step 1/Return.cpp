#include <iostream>
#include <string>
#include <fstream>
#include "Return.h"

Return::Return() {
    SymbolTable* st = SymbolTable::getSingleton();
    // ReturnAddress* ra = ReturnAddress::getSingleton();

    // int currSize = st->getsTV();
    // int OGSize = ra->getOff();
    // int total = currSize - OGSize;
    // ra->put(total);
    // st->takeoff(total);
    st->leaveScope();
}

std::string Return::print() {
    return "Return\n";
}