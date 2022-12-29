#ifndef DUP_H_
#define DUP_H_
#include "Stmt.h"
#include "RuntimeStack.h"

class Dup : public Stmt {
public:
    int execute(int& pc);
};
#endif /* DUP_H_ */