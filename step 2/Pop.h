#ifndef POP_H_
#define POP_H_
#include "Stmt.h"
#include "RuntimeStack.h"

class Pop : public Stmt {
public:
    int execute(int& pc);
};
#endif /* POP_H_ */