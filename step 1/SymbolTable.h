#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_
#include <iostream> 
#include <vector>
#include <map>
#include <tuple>
#include <memory>


class SymbolTable{
private:
    static std::unique_ptr<SymbolTable> uniqueSingleton;
    //SymbolTable();
    std::vector<std::map<std::string,int> > sTV;                 // Symbol Table vector
    std::vector<int> varLengths;                 // Symbol Table vector

    // std::string op;         
    int loc = 0;
    // int length;
    //int labelC = 0;                                             // Label counter
    int scope = -1;

    std::map<std::string, int> labelMap;                           // Symbol Table map

public:
    static SymbolTable* getSingleton();
    //virtual void putV(std::string _op, int _location);          // Put variables onto ST
    virtual bool putVar(std::string _op, int _length, int _location);          // Put arrays onto ST
    virtual void putL(int index, std::string _op);              // Put labels onto ST
    //virtual void takeoff(int begin);                            // Takeoff subroutine variables
    virtual int searchLocation(std::string key);                // Return the location of "key"
    // virtual int getLocation();
    // virtual int getsTV();
    // virtual int getLabelC();
    virtual int searchLabel(std::string key);
    virtual void enterScope();                                  // create new map at sTV[scope] and increment scope, set up varLengths[scope]
    virtual void leaveScope();                                   // leave scope aka decrement scope variable
    virtual int getScope();                                     // get the scope number
    virtual int searchLength(int scopeVal);                     //get length at varLengths[scopeVal]
};
#endif /* SYMBOLTABLE_H_ */
