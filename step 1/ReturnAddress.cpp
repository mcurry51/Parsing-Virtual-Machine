#include "ReturnAddress.h"

std::unique_ptr<ReturnAddress> ReturnAddress::uniqueSingleton = nullptr;

ReturnAddress::ReturnAddress() { } 

void ReturnAddress::put(int _opnd) { stack.push_back(_opnd); } 

int ReturnAddress::getOff(){
    int n = stack.size();
    int goV = stack[n - 1];
    stack.pop_back();
    return goV;
}

ReturnAddress* ReturnAddress::getSingleton( ) {
    if (uniqueSingleton == nullptr){
        uniqueSingleton = std::unique_ptr<ReturnAddress>(new ReturnAddress());
    }
    return uniqueSingleton.get(); 
}

int ReturnAddress::getFront() {
    return stack.front();
}