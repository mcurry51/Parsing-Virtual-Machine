#ifndef JUMP_H_
#define JUMP_H_
#include "Stmt.h"

class Jump : public Stmt {
private:
    std::string opnd;

public:
    Jump(std::string _opnd);
    int execute(int& pc);
};
#endif /* JUMP_H_ */