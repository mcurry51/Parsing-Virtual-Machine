#include <iostream>
#include <string>
#include <fstream>
#include "PushScal.h"

PushScal::PushScal(std::string _opnd1) {
    opnd1 = _opnd1;

    //symbol table stuff
    SymbolTable* st = SymbolTable::getSingleton();

    //call search fxn to get location
    scalLoc = st->searchLocation(opnd1);
}

std::string PushScal::print() {
    int value = 0;
    std::string printStr = "PushScal " + std::to_string(scalLoc) + "\n";
    return printStr;
}