#include <iostream>
#include <string>
#include <fstream>
#include "JumpZero.h"

JumpZero::JumpZero(std::string _opnd1) {
    opnd1 = _opnd1;
}

std::string JumpZero::print() {
    SymbolTable* st = SymbolTable::getSingleton();
    LabelLoc = st->searchLabel(opnd1);
    std::string printStr = "JumpZero " + std::to_string(LabelLoc) + "\n";
    return printStr;
}