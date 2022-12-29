#ifndef RETURN_H_
#define RETURN_H_
#include "Stmt.h"

class Return : public Stmt {
public:
    int execute(int& pc);
};
#endif /* RETURN_H_ */