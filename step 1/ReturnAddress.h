#ifndef RETURNADDRESS_H_
#define RETURNADDRESS_H_
#include <iostream>
#include <vector>
#include <memory>

class ReturnAddress {
public: 
    static ReturnAddress* getSingleton( );
    virtual void put(int _opnd);
    virtual int getOff();
    virtual int getFront();
private:
    static std::unique_ptr<ReturnAddress> uniqueSingleton;
   // other instance variables here
    ReturnAddress( ); // could have arguments
    std::vector<int> stack;
};
#endif /* RETURNADDRESS_H_ */

