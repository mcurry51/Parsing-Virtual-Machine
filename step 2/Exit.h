#ifndef EXIT_H_
#define EXIT_H_
#include "Stmt.h"

class Exit : public Stmt {
public:
    int execute(int& pc);
};
#endif /* EXIT_H_ */