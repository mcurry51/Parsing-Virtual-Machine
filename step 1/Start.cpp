#include <iostream>
#include <string>
#include <fstream>
#include "Start.h"

Start::Start() {
    SymbolTable* st = SymbolTable::getSingleton();

    st->enterScope();
    scopeNum = st->getScope(); //for getting length later

    //std::cout << "scope == " << scope << std::endl;
    
}

std::string Start::print() {
    SymbolTable* st = SymbolTable::getSingleton();
    int length = st->searchLength(scopeNum);
    std::string printStr = "Start " + std::to_string(length) + "\n";
    return printStr;
}