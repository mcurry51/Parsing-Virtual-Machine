#ifndef PRINTTOS_H_
#define PRINTTOS_H_
#include "Stmt.h"
#include "RuntimeStack.h"

class Printtos : public Stmt {
public:
    int execute(int& pc);
};
#endif /* PRINTTOS_H_ */