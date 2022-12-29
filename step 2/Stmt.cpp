#include <iostream>
#include "Stmt.h"

void Stmt::setOP(std::string _name){ 
    name = _name;
}

std::string Stmt::getName(){
    return name;
}

int Stmt::getLength(){
    return length;
}

Stmt& Stmt::operator= (const Stmt& stmt2) {
   name = stmt2.name;
   return *this;
}

