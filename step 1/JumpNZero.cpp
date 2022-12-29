#include <iostream>
#include <string>
#include <fstream>
#include "JumpNZero.h"

JumpNZero::JumpNZero(std::string _opnd1) {
    opnd1 = _opnd1;
}

std::string JumpNZero::print() {
    SymbolTable* st = SymbolTable::getSingleton();
    LabelLoc = st->searchLabel(opnd1);
    std::string printStr = "JumpNZero " + std::to_string(LabelLoc) + "\n";
    return printStr;

}