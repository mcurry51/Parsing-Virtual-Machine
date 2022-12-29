#ifndef PRINTS_H_
#define PRINTS_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Prints : public Stmt {
public:
    std::string print();
    Prints(std::string _opnd1);

private:
    std::string opnd1;
};
#endif /* PRINTS_H_ */