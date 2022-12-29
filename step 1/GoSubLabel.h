#ifndef GOSUBLABEL_H_
#define GOSUBLABEL_H_
#include "Stmt.h"
#include "SymbolTable.h"

class GoSubLabel : public Stmt {
public:
    std::string print();
    GoSubLabel(std::string _opnd1, int _index);

private:
    std::string opnd1;
    int indexLoc;
    int scopeNum;
};
#endif /* GOSUBLABEL_H_ */