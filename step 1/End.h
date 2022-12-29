#ifndef END_H_
#define END_H_
#include "Stmt.h"
#include "SymbolTable.h"

class End : public Stmt {
public:
    std::string print();
};
#endif /* END_H_ */