#ifndef POPSCAL_H_
#define POPSCAL_H_
#include "Stmt.h"

class PopScal : public Stmt {
private:
    std::string opnd;
public:
    int execute(int& pc);
    PopScal(std::string _opnd);
};
#endif /* POPSCAL_H_ */