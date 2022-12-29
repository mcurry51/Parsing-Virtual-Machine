#ifndef DECLSCAL_H_
#define DECLSCAL_H_
#include "Stmt.h"
#include "SymbolTable.h"
#include "ReturnAddress.h"

class DeclScal : public Stmt {
public:
    std::string print();
    DeclScal(std::string _opnd1, int _index);
    virtual bool hasSuccess() override;

private:
    std::string opnd1;
    bool check;
};
#endif /* DECLSCAL_H_ */