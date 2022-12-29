#ifndef JUMP_H_
#define JUMP_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Jump : public Stmt {
public:
    std::string print();
    Jump(std::string _opnd1);

private:
    int LabelLoc;
    std::string opnd1; 
};
#endif /* JUMP_H_ */