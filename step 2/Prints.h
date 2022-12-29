#ifndef PRINTS_H_
#define PRINTS_H_
#include "Stmt.h"

class Prints : public Stmt {
private:
    std::string opnd;

public:
    int execute(int& pc);
    Prints(std::string _opnd);
};
#endif /* PRINTS_H_ */