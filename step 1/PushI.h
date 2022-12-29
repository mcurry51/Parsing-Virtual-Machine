#ifndef PUSHI_H_
#define PUSHI_H_
#include "Stmt.h"
#include "SymbolTable.h"

class PushI : public Stmt {
public:
    std::string print();
    PushI(std::string _opnd1);

private:
    std::string opnd1;
};
#endif /* PUSHI_H_ */