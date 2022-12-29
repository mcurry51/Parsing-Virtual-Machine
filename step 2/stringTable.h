#ifndef STRINGTABLE_H_
#define STRINGTABLE_H_
#include <iostream>
#include <vector>
#include <memory>

class stringTable {
public: 
    static stringTable* getSingleton( );
    virtual void put(std::string _opnd);
    virtual std::string getOff(std::string _opnd);
private:
    static std::unique_ptr<stringTable> uniqueSingleton;
   // other instance variables here
    stringTable( ); // could have arguments
    std::vector<std::string> stack;
};
#endif /* STRINGTABLE_H_ */
