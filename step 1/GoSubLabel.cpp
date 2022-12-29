#include <iostream>
#include <string>
#include <fstream>
#include "GoSubLabel.h"

GoSubLabel::GoSubLabel(std::string _opnd1, int _index) {
    opnd1 = _opnd1;
    indexLoc = _index;

    //symbol table stuff
    SymbolTable* st = SymbolTable::getSingleton();
    // ReturnAddress * ra = ReturnAddress::getSingleton();

    st->enterScope();
    scopeNum = st->getScope(); //for getting length later
    st->putL(indexLoc, opnd1);


    // //store size of st atm
    // int beginningSize = st->getsTV();
    // ra->put(beginningSize);
}

std::string GoSubLabel::print() {
    SymbolTable* st = SymbolTable::getSingleton();
    int length = st->searchLength(scopeNum);
    std::string printStr = "GoSubLabel " + std::to_string(length) + "\n";
    return printStr;
}

// sb1 {  ->ra[0]

//     sb2 { -> ra[1]

//     } -ra[1]
// } 


// sb1 {  ->ra[0]

// } -> ra[0]

// sb2 { -> ra[1]

// } -> ra[1]
