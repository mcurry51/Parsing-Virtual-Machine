#include "Return.h"

int Return::execute(int& pc) {
    //Set pc to last return address
    ReturnAddress* ra = ReturnAddress::getSingleton();
    dataMemory* dm = dataMemory::getSingleton();
    pc = ra->getOff();

    // pop current subroutine stack frame from dataMemory
    dm->popSubFrame( );

    return pc;
}