#ifndef RUNTIMESTACK_H_
#define RUNTIMESTACK_H_
#include <iostream>
#include <vector>
#include <memory>

class RuntimeStack {
public: 
    static RuntimeStack* getSingleton( );
    virtual void put(int _opnd);
    virtual int getOff();
private:
    static std::unique_ptr<RuntimeStack> uniqueSingleton;
   // other instance variables here
    RuntimeStack(); // could have arguments
    std::vector<int> stack;
};
#endif /* RUNTIMESTACK_H_ */
