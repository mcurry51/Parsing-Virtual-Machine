#include <iostream>
#include <string>
#include <fstream>
#include "Prints.h"

Prints::Prints(std::string _opnd1) {
    opnd1 = _opnd1;
}

std::string Prints::print() {
    std::string printStr = "Prints " + opnd1 + "\n";
    return printStr;
}