#ifndef PUSHARR_H_
#define PUSHARR_H_
#include "Stmt.h"
#include "SymbolTable.h"

class PushArr : public Stmt {
public:
    std::string print();
    PushArr(std::string _opnd1);

private:
    std::string opnd1;
    int arrLoc;
};
#endif /* PUSHARR_H_ */