#ifndef DECLARR_H_
#define DECLARR_H_
#include "Stmt.h"
#include "SymbolTable.h"

class DeclArr : public Stmt {
public:
    std::string print();
    DeclArr(std::string _opnd1, std::string _opnd2, int _index);
    virtual bool hasSuccess() override;

private:
    std::string opnd1;
    std::string opnd2;
    bool check;
};
#endif /* DECLARR_H_ */