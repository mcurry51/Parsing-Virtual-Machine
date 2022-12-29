#ifndef SWAP_H_
#define SWAP_H_
#include "Stmt.h"

class Swap : public Stmt {
public:
    int execute(int& pc);
};
#endif /* SWAP_H_ */