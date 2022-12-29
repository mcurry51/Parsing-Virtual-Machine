#include <iostream>
#include <string>
#include <fstream>
#include "Jump.h"

Jump::Jump(std::string _opnd1) {
    opnd1 = _opnd1;
}

std::string Jump::print() {
    SymbolTable* st = SymbolTable::getSingleton();
    LabelLoc = st->searchLabel(opnd1);
    std::string printStr = "Jump " + std::to_string(LabelLoc) +"\n";
    return printStr;

}