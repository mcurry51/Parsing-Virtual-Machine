#ifndef PUSHI_H_
#define PUSHI_H_
#include "Stmt.h"

class PushI : public Stmt {
private:
    std::string opnd;
    
public:
    int execute(int& pc);
    PushI(std::string _opnd);
};
#endif /* PUSHI_H_ */