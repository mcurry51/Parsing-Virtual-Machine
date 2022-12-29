#include <iostream>
#include <string>
#include <fstream>
#include "PopArr.h"

PopArr::PopArr(std::string _opnd1) {
    opnd1 = _opnd1;

    SymbolTable* st = SymbolTable::getSingleton();

    arrLoc = st->searchLocation(opnd1);
}

std::string PopArr::print() {
    std::string printStr = "PopArr " + std::to_string(arrLoc) +"\n";
    return printStr;
}