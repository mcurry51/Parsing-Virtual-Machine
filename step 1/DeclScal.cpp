#include <iostream>
#include <string>
#include <fstream>
#include "DeclScal.h"

DeclScal::DeclScal(std::string _opnd1, int _index) {
    opnd1 = _opnd1;
    
    //symbol table entry
    SymbolTable* st = SymbolTable::getSingleton();
    check = st->putVar(opnd1, 1, _index);
    if(!check) {
        std::cout << "duplicate var in DeclScal: " << opnd1 << std::endl;
    }
    
}

bool DeclScal::hasSuccess() {
    return check;   
}

std::string DeclScal::print() {

    return "";
}