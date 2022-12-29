#ifndef PUSHSCAL_H_
#define PUSHSCAL_H_
#include "Stmt.h"
#include "SymbolTable.h"

class PushScal : public Stmt {
public:
    std::string print();
    PushScal(std::string _opnd1);

private:
    std::string opnd1;
    int scalLoc;
};
#endif /* PUSHSCAL_H_ */