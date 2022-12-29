#include <iostream>
#include <string>
#include <fstream>
#include "PopScal.h"

PopScal::PopScal(std::string _opnd1) {
    opnd1 = _opnd1;

    //symbol table stuff
    SymbolTable* st = SymbolTable::getSingleton();

    //call search fxn to get location
    scalLoc = st->searchLocation(opnd1);
}

std::string PopScal::print() {
    std::string printStr = "PopScal " + std::to_string(scalLoc) + "\n";
    return printStr;
}