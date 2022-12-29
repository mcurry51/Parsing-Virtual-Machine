#ifndef MUL_H_
#define MUL_H_
#include "Stmt.h"
#include "RuntimeStack.h"

class Mul : public Stmt {
public:
    int execute(int& pc);
};
#endif /* MUL_H_ */