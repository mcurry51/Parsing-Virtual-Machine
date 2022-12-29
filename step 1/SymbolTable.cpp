#include "SymbolTable.h"

std::unique_ptr<SymbolTable> SymbolTable::uniqueSingleton = nullptr;

SymbolTable* SymbolTable::getSingleton( ) {
    if (uniqueSingleton == nullptr){
        uniqueSingleton = std::unique_ptr<SymbolTable>(new SymbolTable());
    }
    return uniqueSingleton.get();
}

// void SymbolTable::putV(std::string _op, int _location){
//     // Store the arguments. if sTC = 0, meaning this the first
//     // thing in Symbol Table, set location to 0.
    
//     putA(_op, 1, _location);

//     return;
// }

/*
// called by start and by gosublabel
void SymbolTable::enterScope() {
    sTV.push_back(std::map<std::string,int>());
    varLengths.push_back(0);
    scope += 1;
}

void SyhbolTable::leaveScope() {
    scope -= 1;


}
*/

void SymbolTable::enterScope() {

    //std::cout << "scope == " << scope << std::endl;
    scope += 1;
    sTV.push_back(std::map<std::string,int>());
    varLengths.push_back(0);
    //scope += 1;

    
}

void SymbolTable::leaveScope() {
    scope -= 1;
}

int SymbolTable::getScope() {
    return scope;
}

bool SymbolTable::putVar(std::string _op, int _length, int _location){
    
    //error check for duplicates
    std::map<std::string,int> scopeMap = sTV[scope];
    if (scopeMap.find(_op) == scopeMap.end()) {
        // not found
        sTV[scope].insert({_op, loc});
        loc += _length;
        
        // Update locaton
        varLengths[scope] += _length;

        return true;

    } else {
        // found
        return false;
    }
}


void SymbolTable::putL(int index, std::string _op){
    // All labels have a length of 0
    //length = 0;

    // Increase counter
    //labelC++;

    // Insert the label name, and the location is the STMT buffer index
    labelMap.insert({_op,index});

    // // Push onto Symbol Table vector
    // sTV.push_back(sTMap);

    return;

}

// void SymbolTable::takeoff(int begin){
//     // Get size of symbol table
//     int sS = sTV.size();
//     int sbSize = sS - begin;

//     // Pop of subroutine variables, subroutine counter amount of times
//     for (int i = 0; i < sbSize;i++){
//         sTV.pop_back();
//     }

//     return;
// }

int SymbolTable::searchLocation(std::string key) { 

    // std::cout << "scope sL = " << scope << std::endl;

	std::map<std::string, int> temp = sTV[scope];

    std::cout << "st[0] = " << temp.begin()->first << std::endl;
    std::cout << "st[0].val = " << temp.begin()->second << std::endl;

    //std::cout << temp.begin()->first << " " << temp.begin()->second << std::endl;

    // Iterate throughout vector, but backwards
	// for(int i = sTV.size() - 1; i >= 0; i--){
    // // Set a temporary map equal to the map at vector's location "i"
    //     temp = sTV[i];
    // // Iterate through map. If the key is equal to that variable/label, return it's location
    //     for (auto it = temp.begin();it != temp.end(); ++it){
    //         if (key == it->first){
    //             return it->second;
    //         }
    //     }
    // }

    if (sTV.size() == 1) {
        return temp.begin()->second;

    }
    else {
        if (temp.find(key) == temp.end()) {
            std::cout << "1--------st[0].val = " << temp.find(key)->second << std::endl;
            std::cout << "isssssuuuuuuueeeeeeeeeeeessssssss" << std::endl;
            return -1;
        }
        else {
            std::cout << "3----------st[0].val = " << temp.find(key)->second << std::endl;
            return temp.find(key)->second;
        }
    }

    // if (temp.find(key) == temp.end()) {
    //     if (sTV.size() != 1) {
    //         std::cout << "1--------st[0].val = " << temp.find(key)->second << std::endl;
    //         std::cout << "isssssuuuuuuueeeeeeeeeeeessssssss" << std::endl;
    //         return -1;
    //     }
    //     else {
    //         std::cout << "2-------------st[0].val = " << temp.find(key)->second << std::endl;
    //         return temp.find(key)->second;
    //     }
    // }
    // else {
    //     std::cout << "3----------st[0].val = " << temp.find(key)->second << std::endl;
    //     return temp.find(key)->second;
    // }
}

int SymbolTable::searchLabel(std::string key) { 
    return labelMap.find(key)->second;
}

int SymbolTable::searchLength(int scopeVal) {
    return varLengths[scopeVal]; 
}

// int SymbolTable::getLocation(){
//     return location;
// }

// int SymbolTable::getsTV(){
//     return sTV.size();
// }

// int SymbolTable::getLabelC(){
//     return labelC;
// }

// variable: loc, len 

// int loc = 0;
// //first element of ST - declscal A

// <{A:0}>
// loc = 1
// //declarr B 7
// <{A:0}, {B:1}, {L2: }>
// loc = 8