#ifndef STMT_H_
#define STMT_H_
#include "ReturnAddress.h"
#include "SymbolTable.h"


class Stmt { // this will later be abstract, do not instatiate directly
public:
    virtual std::string        print( ) = 0; // this is out serialize, that dumps the object to a file
//    Stmt(std::string _name);
    virtual bool hasSuccess();
    virtual             Stmt& operator= (const Stmt& stmt2);
    virtual void        setOP(std::string _name, int length);
    virtual std::string getName();
    virtual int         getLength();
private:
    std::string         name;
    int                 length;
};
#endif /* STMT_H_ */
