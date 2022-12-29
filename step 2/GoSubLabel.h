#ifndef GOSUBLABEL_H_
#define GOSUBLABEL_H_
#include "Stmt.h"

class GoSubLabel : public Stmt {
private:
    std::string opnd;
public:
    GoSubLabel(std::string _opnd);
    int execute(int& pc);
};
#endif /* GOSUBLABEL_H_ */