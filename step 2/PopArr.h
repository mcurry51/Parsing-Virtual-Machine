#ifndef POPARR_H_
#define POPARR_H_
#include "Stmt.h"

class PopArr : public Stmt {
private:
    std::string opnd;
public:
    int execute(int&pc);
    PopArr(std::string _opnd);
};
#endif /* POPARR_H_ */