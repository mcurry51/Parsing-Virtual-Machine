#ifndef DATAMEMORY_H_
#define DATAMEMORY_H_
#include <iostream>
#include <vector>
#include <memory>

class dataMemory {
public: 
    static dataMemory* getSingleton( );
    virtual void createVector(int _opnd);
    virtual void popSubFrame( );
    virtual void resizeStack(int _opnd);
    virtual void setValue(int _opnd, int val);
    virtual int getValue(int _opnd);
private:
    static std::unique_ptr<dataMemory> uniqueSingleton;
   // other instance variables here
    dataMemory( ); // could have arguments
    std::vector<int> stack;
};
#endif /* DATAMEMORY_H_ */
