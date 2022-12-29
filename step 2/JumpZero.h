#ifndef JUMPZERO_H_
#define JUMPZERO_H_
#include "Stmt.h"

class JumpZero : public Stmt {
private:
    std::string opnd;
public:
    JumpZero(std::string _opnd);
    int execute(int& pc);
};
#endif /* JUMPZERO_H_ */