#ifndef POPARR_H_
#define POPARR_H_
#include "Stmt.h"
#include "SymbolTable.h"

class PopArr : public Stmt {
public:
    std::string print();
    PopArr(std::string _opnd1);

private:
    std::string opnd1;
    int arrLoc;
};
#endif /* POPARR_H_ */