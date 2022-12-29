#ifndef PRINTTOS_H_
#define PRINTTOS_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Printtos : public Stmt {
public:
    std::string print();
};
#endif /* PRINTTOS_H_ */