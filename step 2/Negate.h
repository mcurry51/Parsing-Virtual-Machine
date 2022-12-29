#ifndef NEGATE_H_
#define NEGATE_H_
#include "Stmt.h"

class Negate : public Stmt {
public:
    int execute(int& pc);
};
#endif /* NEGATE_H_ */