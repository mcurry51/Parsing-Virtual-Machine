#include "RuntimeStack.h"

std::unique_ptr<RuntimeStack> RuntimeStack::uniqueSingleton = nullptr;

RuntimeStack::RuntimeStack( ) { } 

void RuntimeStack::put(int _opnd) { stack.push_back(_opnd); } 

int RuntimeStack::getOff(){
    int n = stack.size();
    int goV = stack[n - 1];
    stack.pop_back();
    return goV;
}

RuntimeStack* RuntimeStack::getSingleton( ) {
    if (uniqueSingleton == nullptr){
        uniqueSingleton = std::unique_ptr<RuntimeStack>(new RuntimeStack());
    }
    return uniqueSingleton.get(); 
}
