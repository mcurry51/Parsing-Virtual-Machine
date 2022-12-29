EXEC = step1
CLASS_FILES = Add.o DeclArr.o DeclScal.o Div.o Dup.o End.o Exit.o GoSub.o GoSubLabel.o Jump.o \
 JumpNZero.o JumpZero.o Label.o Mul.o Negate.o Pop.o PopArr.o PopScal.o Prints.o Printtos.o \
 PushArr.o PushI.o PushScal.o Return.o ReturnAddress.o Start.o Stmt.o \
 Swap.o SymbolTable.o
SOURCE_FILES =  main.o $(CLASS_FILES)
HEADER_FILES =  $(CLASS_FILES:.o=.h)

# test: step2 
# 	./step2 

# run: $(EXEC)
# 	./$(EXEC) $(INPUT)

all: clean step1

testall: test1 test2 test3 test4 test5 test6 test7 test8 test9 test10 test11 test12 test13 test14 test15 test16 test17 test18 test19 test20 test21 test22 test23 test24 test25 test26 test27

$(EXEC): $(SOURCE_FILES)
	g++ $(SOURCE_FILES) -g -std=c++11 -o $(EXEC)

%.o: %.cpp $(HEADER_FILES)
	g++ $< -c -g -std=c++11 -o $@

test0: $(EXEC)
	./$(EXEC) files/0StartExit
	
test1: $(EXEC)
	./$(EXEC) files/1PushI
	
test2: $(EXEC)
	./$(EXEC) files/2PrintTOS

test3: $(EXEC)
	./$(EXEC) files/3Add

test4: $(EXEC)
	./$(EXEC) files/4Prints

test5: $(EXEC)
	./$(EXEC) files/5Div

test6: $(EXEC)
	./$(EXEC) files/6Dup

test7: $(EXEC)
	./$(EXEC) files/7Mul

test8: $(EXEC)
	./$(EXEC) files/8Negate

test9: $(EXEC)
	./$(EXEC) files/9Pop

test10: $(EXEC)
	./$(EXEC) files/10Swap

test11: $(EXEC)
	./$(EXEC) files/11Label

test12: $(EXEC)
	./$(EXEC) files/12Jump

test13: $(EXEC)
	./$(EXEC) files/13SimpleGoSub_GoSubLabel_Return

test14: $(EXEC)
	./$(EXEC) files/14ScalarEasy

test15: $(EXEC)
	./$(EXEC) files/15ScalarHard

test16: $(EXEC)
	./$(EXEC) files/16ScalarEasy

test17: $(EXEC)
	./$(EXEC) files/17ScalarHard

test18: $(EXEC)
	./$(EXEC) files/18ScalarHardest

test19: $(EXEC)
	./$(EXEC) files/19ArrayEasy

test20: $(EXEC)
	./$(EXEC) files/20ArrayHard

test21: $(EXEC)
	./$(EXEC) files/21ArrayEasy

test22: $(EXEC)
	./$(EXEC) files/22ArrayHard

test23: $(EXEC)
	./$(EXEC) files/23ArrayHardest

test24: $(EXEC)
	./$(EXEC) files/24JumpZero

test25: $(EXEC)
	./$(EXEC) files/25JumpNZero

test26: $(EXEC)
	./$(EXEC) files/26Recurse

test27: $(EXEC)
	./$(EXEC) files/27DotProd

test99: $(EXEC)
	./$(EXEC) files/99Sample

clean:
	rm -f $(EXEC)
	rm -f *.o

.PHONY: run all