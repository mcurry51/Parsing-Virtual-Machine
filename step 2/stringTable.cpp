#include "stringTable.h"

std::unique_ptr<stringTable> stringTable::uniqueSingleton = nullptr;

stringTable::stringTable( ) { } 

void stringTable::put(std::string _opnd) {stack.push_back(_opnd);} 

std::string stringTable::getOff(std::string _opnd){
    int n = stack.size();
    std::string goV = stack[n - 1];
    stack.pop_back();
    return goV;
}

stringTable* stringTable::getSingleton( ) {
    if (uniqueSingleton == nullptr){
        uniqueSingleton = std::unique_ptr<stringTable>(new stringTable());
    }
    return uniqueSingleton.get(); 
}
