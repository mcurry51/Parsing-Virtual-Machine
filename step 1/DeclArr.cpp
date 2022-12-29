#include <iostream>
#include <string>
#include <fstream>
#include "DeclArr.h"

DeclArr::DeclArr(std::string _opnd1, std::string _opnd2, int _index) {

    int loc = _opnd1.find(" ");
    opnd1 = _opnd1.substr(0, loc);;

    //opnd1 = _opnd1;
    opnd2 = _opnd2;
    int len = stoi(opnd2);

    //symbol table insert
    SymbolTable* st = SymbolTable::getSingleton();
    check = st->putVar(opnd1, len, _index);
    if(!check) {
        std::cout << "duplicate var in DeclArr: " << opnd1 << std::endl;
    }
    
}

bool DeclArr::hasSuccess() {
    return check;   
}

std::string DeclArr::print() {
    return "";
}