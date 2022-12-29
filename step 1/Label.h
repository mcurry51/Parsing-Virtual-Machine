#ifndef LABEL_H_
#define LABEL_H_
#include "Stmt.h"
#include "SymbolTable.h"

class Label : public Stmt {
public:
    std::string print();
    Label(std::string _opnd1, int _indexLoc);
    
private:
    std::string opnd1;
    int indexLoc;
};
#endif /* LABEL_H_ */