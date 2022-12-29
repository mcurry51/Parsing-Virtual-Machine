#ifndef NEGATE_H_
#define NEGATE_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Negate : public Stmt {
public:
    std::string print();
};
#endif /* NEGATE_H_ */