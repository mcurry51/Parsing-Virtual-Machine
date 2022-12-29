#ifndef SWAP_H_
#define SWAP_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Swap : public Stmt {
public:
    std::string print();
};
#endif /* SWAP_H_ */