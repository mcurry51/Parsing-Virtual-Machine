#include "dataMemory.h"

std::unique_ptr<dataMemory> dataMemory::uniqueSingleton = nullptr;

dataMemory::dataMemory( ) {  } 

void dataMemory::createVector(int _opnd) { 
    //std::vector<int> vect(_opnd, 0);
    int sizeOf = stack.size() + _opnd;
    stack.resize(sizeOf); //stack = vector of vectors therefore stack.push_back(vect)
}

//THEN once done with subroutine that's stored in vect => stack.pop()
void dataMemory::popSubFrame( ) {
    stack.pop_back();
}

void dataMemory::resizeStack(int _opnd) {
    stack.resize(_opnd);
}

void dataMemory::setValue(int _opnd, int val) {
    stack[_opnd] = val;
}

int dataMemory::getValue(int _opnd) {
    return stack[_opnd];
}

dataMemory* dataMemory::getSingleton( ) {
    if (uniqueSingleton == nullptr){
        uniqueSingleton = std::unique_ptr<dataMemory>(new dataMemory());
    }
    return uniqueSingleton.get(); 
}
