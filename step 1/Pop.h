#ifndef POP_H_
#define POP_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Pop : public Stmt {
public:
    std::string print();
};
#endif /* POP_H_ */