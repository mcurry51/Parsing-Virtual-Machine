#ifndef STMT_H_
#define STMT_H_
#include <iostream>
#include <fstream>
#include <string>
#include "RuntimeStack.h"
#include "dataMemory.h"
#include "stringTable.h"
#include "ReturnAddress.h"

class Stmt { // this will later be abstract, do not instatiate directly
public:
    virtual int         execute(int& pc) = 0; // this is out serialize, that dumps the object to a file
    
//    Stmt(std::string _name);
    virtual             Stmt& operator= (const Stmt& stmt2);
    virtual void        setOP(std::string _name);
    virtual std::string getName();
    virtual int         getLength();
private:
    std::string         name;
    int                 length;
};
#endif /* STMT_H_ */
