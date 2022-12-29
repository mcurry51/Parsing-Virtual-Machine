#include "GoSubLabel.h"

GoSubLabel::GoSubLabel(std::string _opnd) : opnd(_opnd) { }

int GoSubLabel::execute(int& pc) {
    dataMemory* dM = dataMemory::getSingleton();
    int opndInt = stoi(opnd);
    dM->createVector(opndInt);

    return pc +1; 
}