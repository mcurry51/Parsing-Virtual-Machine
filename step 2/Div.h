#ifndef DIV_H_
#define DIV_H_
#include "Stmt.h"

class Div : public Stmt {
public:
    int execute(int& pc);
};
#endif /* DIV_H_ */