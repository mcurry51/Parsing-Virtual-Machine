#ifndef PUSHARR_H_
#define PUSHARR_H_
#include "Stmt.h"

class PushArr : public Stmt {
private:
    std::string opnd;
public:
    int execute(int& pc);
    PushArr(std::string _opnd);
};
#endif /* PUSHARR_H_ */