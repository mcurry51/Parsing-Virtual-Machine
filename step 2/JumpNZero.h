#ifndef JUMPNZERO_H_
#define JUMPNZERO_H_
#include "Stmt.h"

class JumpNZero : public Stmt {
private:
    std::string opnd;
public:
    JumpNZero(std::string _opnd);
    int execute(int& pc);
};
#endif /* JUMPNZERO_H_ */