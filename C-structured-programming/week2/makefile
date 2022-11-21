
# Compiler flags
CC = gcc
CC_FLAGS = -std=c11
BUILD = ./bin
SRC = .
OBJDIR = $(BUILD)
IDIR = .
APP = adt.out

# Main executable target
adt: $(SRC)/adt.c $(OBJDIR)/stack.o
	@echo --- building executable ---
	$(CC) $(CC_FLAGS) $(SRC)/adt.c -o $(BUILD)/$(APP)  $(OBJDIR)/stack.o
	@echo --- Done building $(APP) ---

$(OBJDIR)/stack.o: $(SRC)/stack.c
	@echo ---- building stack object ----
	$(CC) -c $(SRC)/stack.c -o $(OBJDIR)/stack.o
	@echo ------------ DONE -------------

clean:
	rm $(BUILD)/*
	
init:
	mkdir $(BUILD)
	mkdir $(OBJDIR)
	mkdir $(SRC)
	mkdir $(IDIR)	

runadt:
	$(BUILD)/$(APP)

debug: 
	gdb $(BUILD)/$(APP)