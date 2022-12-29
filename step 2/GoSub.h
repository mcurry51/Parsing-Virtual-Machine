#ifndef GOSUB_H_
#define GOSUB_H_
#include "Stmt.h"

class GoSub : public Stmt {
private:
    std::string opnd;

public:
    GoSub(std::string _opnd);    
    int execute(int& pc);
};
#endif /* GOSUB_H_ */