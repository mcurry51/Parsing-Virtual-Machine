#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Stmt.h"
#include "Add.h"
#include "DeclArr.h"
#include "DeclScal.h"
#include "Div.h"
#include "Dup.h"
#include "End.h"
#include "Exit.h"
#include "GoSub.h"
#include "GoSubLabel.h"
#include "Jump.h"
#include "JumpNZero.h"
#include "JumpZero.h"
#include "Label.h"
#include "Mul.h"
#include "Negate.h"
#include "Pop.h"
#include "PopArr.h"
#include "PopScal.h"
#include "Prints.h"
#include "Printtos.h"
#include "PushArr.h"
#include "PushI.h"
#include "PushScal.h"
#include "Return.h"
#include "Start.h"
#include "Swap.h"
#include "SymbolTable.h"

std::shared_ptr<Stmt> parseStatement(std::string first, std::string second, std::string third, int index) {
    std::shared_ptr<Stmt> operation(nullptr);
    if (first == "start") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Start>( );
                //operation->setOP("OP_START_PROGRAM",NULL);
            }
        }
    }
    else if (first == "end") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<End>( );
                //operation->setOP("End",NULL);
            }
        }
    }
    else if (first == "return") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Return>( );
                //operation->setOP("OP_RETURN",NULL);
            }
        }
    }
    else if (first == "exit") {
        if (second == "") {
            if ((third == "") || (third == "0")) {
                operation = std::make_shared<Exit>( );
                //operation->setOP("OP_EXIT",NULL);
            }
        }
    }
    else if (first == "declarr") {
        if (second != "") {
            if (third != "") {
                operation = std::make_shared<DeclArr>(second, third, index);
                //operation->setOP("DeclArr");
            }
        }
    }
    else if (first == "add") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Add>( );
                //operation->setOP("OP_ADD",NULL);
            }
        }
    }
    else if (first == "declscal") {
        if (second != "") {
            if (third == "") {
                operation = std::make_shared<DeclScal>(second, index);
                //operation->setOP("DeclScal");
            }
        }
    }
    else if (first == "div") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Div>( );
                //operation->setOP("OP_DIV",NULL);
            }
        }
    }
    else if (first == "dup") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Dup>( );
                //operation->setOP("OP_DUP",NULL);
            }
        } 
    }
    else if (first == "gosub") {
        if (third == "") {
            operation = std::make_shared<GoSub>(second);
            //operation->setOP("OP_GOSUB",NULL);
        }
    }
    else if (first == "gosublabel") {
        if (third == "") {
            operation = std::make_shared<GoSubLabel>(second, index);
            //operation->setOP("OP_ENTER_SUBROUTINE",NULL);
        }
    }
    else if (first == "jump") {
        if (third == "") {
            operation = std::make_shared<Jump>(second);
            //operation->setOP("OP_JUMP",NULL);
        }
    }
    else if (first == "jumpnzero") {
        if (third == "") {
            operation = std::make_shared<JumpNZero>(second);
            //operation->setOP("OP_JUMPNZERO",NULL);
        }
    }
    else if (first == "jumpzero") {
        if (third == "") {
            operation = std::make_shared<JumpZero>(second);
            //operation->setOP("OP_JUMPZERO",NULL);
        }
    }
    else if (first == "label") {
        if (third == "") {
            operation = std::make_shared<Label>(second, index);
            //operation->setOP("OP_LABEL");
        }
    }
    else if (first == "mul") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Mul>();
                //operation->setOP("OP_MUL",NULL);
            }
        }
    }
    else if (first == "negate") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Negate>();
                //operation->setOP("OP_NEGATE",NULL);
            }
        }
    }
    else if (first == "pop") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Pop>();
                //operation->setOP("OP_POP",NULL);
            }
        }
    }
    else if (first == "poparr") {
        if (third == "") {
            operation = std::make_shared<PopArr>(second);
            //operation->setOP("OP_POPARRAY",NULL);
        }
    }
    else if (first == "popscal") {
        if (third == "") {
            operation = std::make_shared<PopScal>(second);
            //operation->setOP("OP_POPSCALAR",NULL);
        }
    }
    else if (first == "prints") {
        if (third == "") {
            operation = std::make_shared<Prints>(second);
            //operation->setOP("OP_PRINTS",NULL);
        }
    }
    else if (first == "printtos") {
        if (second == "") {
            if (third == "") {
                operation = std::make_shared<Printtos>();
                //operation->setOP("OP_PRINTTOS",NULL);
            }
        }
    }
    else if (first == "pusharr") {
        if (third == "") {
            operation = std::make_shared<PushArr>(second);
            //operation->setOP("OP_PUSHARRAY",NULL);
        }
    }
    else if (first == "pushi") {
        if (third == "") {
            operation = std::make_shared<PushI>(second);
            //operation->setOP("OP_PUSHI",NULL);
        }
    }
    else if (first == "pushscal") {
        if (third == "") {
            operation = std::make_shared<PushScal>(second);
            //operation->setOP("OP_PUSHSCALAR",NULL);
        }
    }
    else if (first == "swap") {
        if (third == "") {
            operation = std::make_shared<Swap>();
            //operation->setOP("OP_SWAP,NULL",NULL);
        }
    }
        
    if (!operation->hasSuccess()) {
        std::cout << "EXIT_FALURE" << std::endl;
        // operation = std::shared_ptr<Stmt>(nullptr);
        return nullptr;
    }

    return operation;   
}

////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char * argv[]){

    std::ifstream input(argv[1]);
    std::string inFile = argv[1];
    if(!input.is_open()) {
        std::cout << "error - opening file" << std::endl;
        return EXIT_FAILURE;
    }
    // std::cout << "opened file" << std::endl;

    std::vector<std::string> fileLines;
    std::string line;
    
    while(getline(input, line)){
            fileLines.push_back(line);
    }
    input.close();

    std::cout << "read lines" << std::endl;

    // for(auto e:fileLines) {
    //     std::cout << e << std::endl;
    // }


    std::vector<std::shared_ptr<Stmt> > instruction;    
    // std::vector<std::unique_ptr<Stmt>> instruction;     //harder to work with
    //std::vector<Stmt*> instruction;  //need to free memory via For loop afterwards
    //std::vector<Stmt*> instruction;  //instruction memory (IM), need to free memory via For loop afterwards


    //Error check: stuff after "end" OR last thing not "end"
    std::string last = fileLines.back();
    int loc = last.find(" ");
    std::string word = last.substr(0, loc);
    if (word != "end") {
        std::cout << "last line not 'end' or doesn't contain 'end'" << std::endl;
        return EXIT_FAILURE;        
    }

    int index = 0;
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
        if (first == "declarr" || first == "declscal" || first == "label") {
            index--;
        }
        
        std::cout << "index = " << index << "first = " << first << std::endl;
        std::cout << "second = " << second << "third = " << third << std::endl;
        std::shared_ptr<Stmt> operation = parseStatement(first, second, third, index);
        // std::cout << "After parseStatement" << std::endl;

        // std::cout << "Before NULL check" << std::endl;
        if(operation != NULL) {
            // std::cout << "pushing onto instruction" << std::endl;
            instruction.push_back(operation);
            index++;
        }
        else {
            std::cout << "error occured in parseStatement" << std::endl;
            return EXIT_FAILURE;
        }
    }

    std::cout << "IB populated" << std::endl;

    //std::ofstream output(argv[2]);
    //std::ofstream output;
    //output.open(argv[2]);

    std::ofstream output;
    output.open(inFile + ".pout");

    if(!output.is_open()) {
        std::cout << "error - opening output file" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "got output file, about to prints" << std::endl;

    for(auto e: instruction) {
        // std::cout << e << std::endl;
        //output << e->print();
        //delete(e);
        std::cout << e->print();
    }

    std::cout << "printed to file " << std::endl;

    return EXIT_SUCCESS;
}


