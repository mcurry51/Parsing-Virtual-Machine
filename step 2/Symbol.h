#ifndef SYMBOL_H_
#define SYMBOL_H_
#include <map>
#include <iostream>
// Symbol creation
class Symbol {
public:
   Symbol(std::string _location, std::string _length);
   void displaySymbol( );
private:
   std::string location;
   std::string length;
};

#endif /* SYMBOL_H_ */
