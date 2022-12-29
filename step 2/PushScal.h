#ifndef PUSHSCAL_H_
#define PUSHSCAL_H_
#include "Stmt.h"

class PushScal : public Stmt {
private:
    std::string opnd;
public:
    int execute(int& pc);
    PushScal(std::string _opnd);
};
#endif /* PUSHSCAL_H_ */