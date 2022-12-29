#ifndef DIV_H_
#define DIV_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Div : public Stmt {
public:
    std::string print();
};
#endif /* DIV_H_ */