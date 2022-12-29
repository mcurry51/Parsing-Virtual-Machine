#ifndef GOSUB_H_
#define GOSUB_H_
#include "Stmt.h"
#include "SymbolTable.h"

class GoSub : public Stmt {
public:
    std::string print();
    GoSub(std::string _opnd1);

private:
    std::string opnd1;
    int GSLoc;
    
};
#endif /* GOSUB_H_ */