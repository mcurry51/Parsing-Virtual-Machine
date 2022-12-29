#ifndef ADD_H_
#define ADD_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Add : public Stmt {
public:
    std::string print();
};
#endif /* ADD_H_ */