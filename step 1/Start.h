#ifndef START_H_
#define START_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Start : public Stmt {
public:
    Start();
    std::string print();

private:
    int scopeNum;
};
#endif /* START_H_ */