#include "Jump.h"

Jump::Jump(std::string _opnd) : opnd(_opnd) { }

int Jump::execute(int& pc){
    int opndInt = stoi(opnd);
    pc = opndInt;
    return pc;
}
    