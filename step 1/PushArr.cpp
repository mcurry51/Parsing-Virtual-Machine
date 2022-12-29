#include <iostream>
#include <string>
#include <fstream>
#include "PushArr.h"

PushArr::PushArr(std::string _opnd1) {
    opnd1 = _opnd1;

    SymbolTable* st = SymbolTable::getSingleton();

    arrLoc = st->searchLocation(opnd1);
}

std::string PushArr::print() {
    std::string printStr = "PushArr " + std::to_string(arrLoc) + "\n";
    return printStr;
}