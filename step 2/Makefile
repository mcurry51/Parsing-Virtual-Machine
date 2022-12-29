EXEC = step2
CLASS_FILES = Add.o dataMemory.o Div.o Dup.o Exit.o GoSub.o GoSubLabel.o Jump.o \
 JumpNZero.o JumpZero.o Mul.o Negate.o Pop.o PopArr.o PopScal.o Prints.o Printtos.o \
 PushArr.o Pushi.o PushScal.o Return.o ReturnAddress.o RuntimeStack.o Start.o Stmt.o stringTable.o \
 Swap.o Symbol.o 
SOURCE_FILES =  main.o $(CLASS_FILES)
HEADER_FILES =  $(CLASS_FILES:.o=.h)

# test: step2 
# 	./step2 

# run: $(EXEC)
# 	./$(EXEC) $(INPUT)

all: clean step2

testall: test1 test2 test3 test4 test5 test6 test7 test8 test9 test10 test11 test12 test13 test14 test15 test16 test17 test18 test19 test20 test21 test22 test23 test24 test25 test26 test27

$(EXEC): $(SOURCE_FILES)
	g++ $(SOURCE_FILES) -g -std=c++11 -o $(EXEC)

%.o: %.cpp $(HEADER_FILES)
	g++ $< -c -g -std=c++11 -o $@

test0: $(EXEC)
	./$(EXEC) VMTestCases/0StartExit.pout
	
test1: $(EXEC)
	./$(EXEC) VMTestCases/1PushI.pout
	
test2: $(EXEC)
	./$(EXEC) VMTestCases/2PrintTOS.pout

test3: $(EXEC)
	./$(EXEC) VMTestCases/3Add.pout

test4: $(EXEC)
	./$(EXEC) VMTestCases/4Prints.pout

test5: $(EXEC)
	./$(EXEC) VMTestCases/5Div.pout

test6: $(EXEC)
	./$(EXEC) VMTestCases/6Dup.pout

test7: $(EXEC)
	./$(EXEC) VMTestCases/7Mul.pout

test8: $(EXEC)
	./$(EXEC) VMTestCases/8Negate.pout

test9: $(EXEC)
	./$(EXEC) VMTestCases/9Pop.pout

test10: $(EXEC)
	./$(EXEC) VMTestCases/10Swap.pout

test11: $(EXEC)
	./$(EXEC) VMTestCases/11Label.pout

test12: $(EXEC)
	./$(EXEC) VMTestCases/12Jump.pout

test13: $(EXEC)
	./$(EXEC) VMTestCases/13SimpleGoSub_GoSubLabel_Return.pout

test14: $(EXEC)
	./$(EXEC) VMTestCases/14ScalarEasy.pout

test15: $(EXEC)
	./$(EXEC) VMTestCases/15ScalarHard.pout

test16: $(EXEC)
	./$(EXEC) VMTestCases/16ScalarEasy.pout

test17: $(EXEC)
	./$(EXEC) VMTestCases/17ScalarHard.pout

test18: $(EXEC)
	./$(EXEC) VMTestCases/18ScalarHardest.pout

test19: $(EXEC)
	./$(EXEC) VMTestCases/19ArrayEasy.pout

test20: $(EXEC)
	./$(EXEC) VMTestCases/20ArrayHard.pout

test21: $(EXEC)
	./$(EXEC) VMTestCases/21ArrayEasy.pout

test22: $(EXEC)
	./$(EXEC) VMTestCases/22ArrayHard.pout

test23: $(EXEC)
	./$(EXEC) VMTestCases/23ArrayHardest.pout

test24: $(EXEC)
	./$(EXEC) VMTestCases/24JumpZero.pout

test25: $(EXEC)
	./$(EXEC) VMTestCases/25JumpNZero.pout

test26: $(EXEC)
	./$(EXEC) VMTestCases/26Recurse.pout

test27: $(EXEC)
	./$(EXEC) VMTestCases/27DotProd.pout

test99: $(EXEC)
	./$(EXEC) VMTestCases/99Sample.pout

clean:
	rm -f $(EXEC)
	rm -f *.o

.PHONY: run all