#include <iostream>
#include <string>
#include <fstream>
#include "GoSub.h"

GoSub::GoSub(std::string _opnd1) {
    opnd1 = _opnd1;
}

std::string GoSub::print() {
    SymbolTable* st = SymbolTable::getSingleton();
    GSLoc = st->searchLabel(opnd1);
    std::string printStr = "GoSub " + std::to_string(GSLoc) + "\n";
    return printStr;
}