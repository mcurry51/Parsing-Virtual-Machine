#ifndef JUMPNZERO_H_
#define JUMPNZERO_H_
#include "Stmt.h"
#include "SymbolTable.h"

class JumpNZero : public Stmt {
public:
    std::string print();
    JumpNZero(std::string _opnd1);

private:
    std::string opnd1; 
    int LabelLoc;
};
#endif /* JUMPNZERO_H_ */