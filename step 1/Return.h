#ifndef RETURN_H_
#define RETURN_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Return : public Stmt {
public:
    std::string print();
    Return();
};
#endif /* RETURN_H_ */