#ifndef EXIT_H_
#define EXIT_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Exit : public Stmt {
public:
    std::string print();
};
#endif /* EXIT_H_ */