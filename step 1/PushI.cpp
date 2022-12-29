#include <iostream>
#include <string>
#include <fstream>
#include "PushI.h"

PushI::PushI(std::string _opnd1) {
    opnd1 = _opnd1;
    
}

std::string PushI::print() {
    std::string printStr = "PushI " + opnd1 + "\n";
    return printStr;
}