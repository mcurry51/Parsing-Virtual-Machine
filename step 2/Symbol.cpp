#include <map>
#include <string>
#include "Symbol.h"

#include <iostream>

Symbol::Symbol(std::string _location, std::string _length) : location(_location), length(_length) { }

void Symbol::displaySymbol(){
   std::cout << "<" << location << ", " << length << ">";
}
