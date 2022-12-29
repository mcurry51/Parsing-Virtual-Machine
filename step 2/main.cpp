#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <memory>
#include <fstream>
#include "Stmt.h"
#include "Add.h"
#include "Div.h"
#include "Dup.h"
#include "Exit.h"
#include "GoSub.h"
#include "GoSubLabel.h"
#include "Jump.h"
#include "JumpNZero.h"
#include "JumpZero.h"
#include "Mul.h"
#include "Negate.h"
#include "Pop.h"
#include "PopArr.h"
#include "PopScal.h"
#include "Prints.h"
#include "Printtos.h"
#include "PushArr.h"
#include "Pushi.h"
#include "PushScal.h"
#include "Return.h"
#include "Start.h"
#include "Swap.h"
#include "stringTable.h"

std::shared_ptr<Stmt> parseStatement(std::string first, std::string second, std::string third) {
    std::shared_ptr<Stmt> operation = NULL;
    if (first == "Start") {
        if (third == "") {
                operation = std::make_shared<Start>(second);
                operation->setOP("OP_START_PROGRAM");
                // std::string check = operation->getName();
                // std::cout << check << std::endl;
        }
        else {
            return NULL;
        }
    }
    else if (first == "Return") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Return>( );
                operation->setOP("OP_RETURN");
                // std::string check = operation->getName();
                // std::cout << check << std::endl;
            }
        }
        else {
            return NULL;
        }
    }
    else if (first == "Exit") { 
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Exit>( );
                operation->setOP("OP_EXIT");
                // std::string check = operation->getName();
                // std::cout << check << std::endl;
            }
        }
        else {
            return NULL;
        }
    }
    else if (first == "Add") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Add>( );
                operation->setOP("OP_ADD");
                // std::string check = operation->getName();
                // std::cout << check << std::endl;
            }
        }
        else {
            return NULL;
        }
    }
    else if (first == "Div") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Div>( );
                operation->setOP("OP_DIV");
                // std::string check = operation->getName();
                // std::cout << check << std::endl;
            }
        }
        else {
            return NULL;
        }
    }
    else if (first == "Dup") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Dup>( );
                operation->setOP("OP_DUP");
                // std::string check = operation->getName();
                // std::cout << check << std::endl;
            }
        }
        else {
            return NULL;
        }
    }
    else if (first == "GoSub") {
        if (third == "") { // originally !=
            operation = std::make_shared<GoSub>(second);
            operation->setOP("OP_GOSUB");
            // std::string check = operation->getName();
            // std::cout << check << std::endl;
        }
        else {
            return NULL;
        }
    }
    else if (first == "GoSubLabel") {
        if (third == "") { // originally !=
            operation = std::make_shared<GoSubLabel>(second);
            operation->setOP("OP_ENTER_SUBROUTINE");
            // std::string check = operation->getName();
            // std::cout << check << std::endl;
        }
        else {
            return NULL;
        }
    }
    else if (first == "Jump") {
        if (third == "") {
            // std::cout << "creating an operation of Jump " << third << std::endl;
            operation = std::make_shared<Jump>(second);
            operation->setOP("OP_JUMP");
            // std::string check = operation->getName();
            // std::cout << check << std::endl;
        }
        else {
            // std::cout << "creating a NULL ptr" << third << std::endl;
            return NULL;
        }
    }
    else if (first == "JumpNZero") {
        if (third == "") { // originally !=
            operation = std::make_shared<JumpNZero>(second);
            operation->setOP("OP_JUMPNZERO");
            // std::string check = operation->getName();
            // std::cout << check << std::endl;
        }
        else {
            return NULL;
        }
    }
    else if (first == "JumpZero") {
        if (third == "") { // might have been originaly != ???
            operation = std::make_shared<JumpZero>(second);
            operation->setOP("OP_JUMPZERO");
            // std::string check = operation->getName();
            // std::cout << check << std::endl;
        }
        else {
            return NULL;
        }
    }
    else if (first == "Mul") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Mul>( );
                operation->setOP("OP_MUL");
                // std::string check = operation->getName();
                // std::cout << check << std::endl;
            }
        }
        else {
            return NULL;
        }
    }
    else if (first == "Negate") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Negate>( );
                // std::string check = operation->getName();
                // std::cout << check << std::endl;
            }
        }
        else {
            return NULL;
        }
    }
    else if (first == "Pop") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Pop>( );
                operation->setOP("OP_POP");
                // std::string check = operation->getName();
                // std::cout << check << std::endl;
            }
        }
        else {
            return NULL;
        }
    }
    else if (first == "PopArray") {
        if (third == "") {
            operation = std::make_shared<PopArr>(second);
            operation->setOP("OP_POPARRAY");
            // std::string check = operation->getName();
            // std::cout << check << std::endl;
        }
        else {
            return NULL;
        }
    }
    else if (first == "PopScalar") {
        if (third == "") {
            operation = std::make_shared<PopScal>(second);
            operation->setOP("OP_POPSCALAR");
            // std::string check = operation->getName();
            // std::cout << check << std::endl;
        }
        else {
            return NULL;
        }
    }
    else if (first == "Prints") {
        if (third == "") {
            operation = std::make_shared<Prints>(second);
            operation->setOP("OP_PRINTS");
            // std::string check = operation->getName();
            // std::cout << check << std::endl;
        }
        else {
            return NULL;
        }
    }
    else if (first == "PrintTOS") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Printtos>( );
                operation->setOP("OP_PRINTTOS");
                // std::string check = operation->getName();
                // std::cout << check << std::endl;
            }
        }
        else {
            return NULL;
        }
    }
    else if (first == "PushArray") { 
        if (third == "") {
            operation = std::make_shared<PushArr>(second);
            operation->setOP("OP_PUSHARRAY");
            // std::string check = operation->getName();
            // std::cout << check << std::endl;
        }
        else {
            return NULL;
        }
    }
    else if (first == "PushI") {
        if (third == "") {
            operation = std::make_shared<PushI>(second);
            operation->setOP("OP_PUSHI");
            // std::string check = operation->getName();
            // std::cout << check << std::endl;
        }
        else {
            return NULL;
        }
    }
    else if (first == "PushScalar") {
        if (third == "") {
            operation = std::make_shared<PushScal>(second);
            operation->setOP("OP_PUSHSCALAR");
            // std::string check = operation->getName();
            // std::cout << check << std::endl;
        }
        else {
            return NULL;
        }
    }
    else if (first == "Swap") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Swap>( );
                operation->setOP("OP_SWAP");
                // std::string check = operation->getName();
                // std::cout << check << std::endl;
            }
        }
        else {
            return NULL;
        }
    }
    return operation;   
}

////////////////////////////////////////////////////
////                MAIN FUNCTION               ////
////////////////////////////////////////////////////

int main(int argc, char ** args) {
    // Stmt* push = parseStatement("pushi". "5", "")

    std::ifstream input;
    input.open(args[1]);
    
    //std::cout << "input stream" << std::endl;

    if(!input.is_open()) {
        std::cout << "error - opening file" << std::endl;
        return -2096;
    }

    std::vector<std::string> fileLines;
    std::string line;
    
    while(getline(input, line)){
            fileLines.push_back(line);
    }
    input.close();

    //std::cout << "read and got lines from file" << std::endl;

    //std::vector<Stmt*> instruction;  //instruction memory (IM), need to free memory via For loop afterwards
    std::vector<std::shared_ptr<Stmt> > instruction;
    // uncomment after testing file open

    for(auto e: fileLines)
    {
        int loc = e.find(" ");
        std::string first;
        std::string second;
        std::string third;

        if (loc != std::string::npos) {
            first = e.substr(0, loc);
            second = e.substr(loc+1, e.size()-loc-1);
            int loc2 = e.find(" ", loc+1);
            if (loc2 != std::string::npos) {
                second = e.substr(loc+1, loc2);
                third = e.substr(loc2+1, e.size()-loc2-1);
            }
        } 
        else {
            first = e;
        }
        
        // std::cout << "Before parseStatement" << std::endl;
        std::shared_ptr<Stmt> operation = parseStatement(first, second, third);
        // std::cout << "After parseStatement" << std::endl;

        // std::cout << "Before NULL check" << std::endl;
        if(operation != NULL) {
            // std::cout << "pushing onto instruction" << std::endl;
            instruction.push_back(operation);
        }
        else {
            std::cout << "EXIT_FALURE" << std::endl;
            return EXIT_FAILURE;
        }
    }
    //std::cout << "instruction buff populated" << std::endl;

    // loop to start execution
    int pc = 0;
    // std::string check;

    // for (auto e: instruction){
    //     e->getName();
    //     std::cout << check << std::endl;
    // }

    int& pc_ref = pc;
    while(pc != -1) {
        //std::cout << instruction[pc] << std::endl;
        pc = instruction[pc]->execute(pc);
        //pc = -1;
    }
    
    return 0;

}

