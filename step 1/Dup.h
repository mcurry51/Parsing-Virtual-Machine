#ifndef DUP_H_
#define DUP_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Dup : public Stmt {
public:
    std::string print();
};
#endif /* DUP_H_ */