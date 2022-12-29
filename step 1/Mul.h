#ifndef MUL_H_
#define MUL_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Mul : public Stmt {
public:
    std::string print();
};
#endif /* MUL_H_ */