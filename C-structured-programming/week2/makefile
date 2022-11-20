
# Compiler flags
CC = gcc
CC_FLAGS = -std=c11
BUILD = ./bin
SRC = .
OBJDIR = $(BUILD)
IDIR = .

# Main executable target
adt.exe: adt.c $(OBJDIR)/stack.o
	$(CC) $(CC_FLAGS) adt.c -o $(BUILD)/main.exe  $(OBJDIR)/stack.o 

$(OBJDIR)/stack.o: $(SRC)/stack.c
	$(CC) -c $(SRC)/stack.c -o $(OBJDIR)/stack.o

clean:
	rm $(BUILD)/*
	
init:
	mkdir $(BUILD)
	mkdir $(OBJDIR)
	mkdir $(SRC)
	mkdir $(IDIR)	