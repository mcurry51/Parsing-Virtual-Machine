#ifndef POPSCAL_H_
#define POPSCAL_H_
#include "Stmt.h"
#include "SymbolTable.h"

class PopScal : public Stmt {
public:
    std::string print();
    PopScal(std::string _opnd1);

private:
    std::string opnd1;
    int scalLoc;
};
#endif /* POPSCAL_H_ */