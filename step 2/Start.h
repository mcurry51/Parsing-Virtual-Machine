#ifndef START_H_
#define START_H_
#include "Stmt.h"
#include "RuntimeStack.h"

class Start : public Stmt {
private:
    std::string opnd;

public:
    int execute(int& pc);
    Start(std::string _opnd);
};
#endif /* START_H_ */