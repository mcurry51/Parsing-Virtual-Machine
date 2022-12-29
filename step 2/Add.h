#ifndef ADD_H_
#define ADD_H_
#include "Stmt.h"

class Add : public Stmt {
public:
    int execute(int& pc);

};
#endif /* ADD_H_ */