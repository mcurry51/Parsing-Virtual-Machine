#ifndef JUMPZERO_H_
#define JUMPZERO_H_
#include "Stmt.h"
#include "SymbolTable.h"

class JumpZero : public Stmt {
public:
    std::string print();
    JumpZero(std::string _opnd1);

private:
    std::string opnd1; 
    int LabelLoc;
};
#endif /* JUMPZERO_H_ */