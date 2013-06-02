CC=gcc
CFLAGS=-c -Wall
LDFLAGS=-g
SOURCES=t1-jeffersonloc.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=t1-jeffersonloc
MY_SOLUTION=$(EXECUTABLE).my.sol

# workarround to make it usable with target run and test
INPUT=t1.in
SOLUTION=t1.sol

all: usage

usage:
	@echo "usage make [iso|niso|jeff|t1]"
	@echo "--------------------------------------------------------------------------------"
	@echo "iso   : my (simple) personal test with isomorphic graph -only!"
	@echo "niso  : my (simple) personal test with not isomorphic graph only!"
	@echo "jeff  : my (simple) personal test with isomorphic AND not isomorphic graph only!"
	@echo "t1    : Full test by guidelines!"
	@echo "--------------------------------------------------------------------------------"
	@echo "You can use too: make [clean|compile]"
	@echo "The targets 'run' and 'test' do not make sense by itself - you need use one of those targets: [iso|niso|jeff|t1]"

$(EXECUTABLE): clean $(OBJECTS)
	@$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	@$(CC) $(CFLAGS) $< -o $@

clean:
	@echo "Cleaning $(EXECUTABLE) ..."
	@rm -rf $(EXECUTABLE)
	@rm -rf $(OBJECTS)

compile: $(SOURCES) $(EXECUTABLE)
	@echo "Compiling $(EXECUTABLE) ..."

run: clean compile
	@echo "Runnig t1 ..."
	@./$(EXECUTABLE) < $(INPUT) > $(MY_SOLUTION)

test: run
	@echo "Testing (if has no return then everything is fine) ..."
	@echo "================================================================================"
	@echo ""
	@diff $(MY_SOLUTION) $(SOLUTION)
	@echo ""
	@echo "================================================================================"

iso: INPUT = t1_ISOMORPHIC.in
iso: SOLUTION = $(INPUT)
iso: test

niso: INPUT = t1_NOT_ISOMORPHIC.in
niso: SOLUTION = $(INPUT)
niso: test

jeff: iso niso
	@echo "Test was executed successfully!!"

t1: INPUT=t1.in
t1: SOLUTION=t1.sol
t1:
	@echo "Full test by guidelines"
