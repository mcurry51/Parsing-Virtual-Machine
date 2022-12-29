#include <iostream>
#include <string>
#include <fstream>
#include "Label.h"

Label::Label(std::string _opnd1, int _indexLoc) {
    opnd1 = _opnd1;
    indexLoc = _indexLoc + 1;

    SymbolTable* st = SymbolTable::getSingleton();
    st->putL(indexLoc, opnd1);
}

std::string Label::print() {
    return "";
}