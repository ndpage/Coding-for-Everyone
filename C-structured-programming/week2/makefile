
# Compiler flags
CC = gcc
CC_FLAGS = -std=c11
BUILD = ./bin
SRC = .
OBJDIR = $(BUILD)/obj
IDIR = .
APP = hw.out

# Week 2 Homework
hw: $(OBJDIR)/hw.o
	@echo --- building executable ---
	$(CC) $(CC_FLAGS) $(OBJDIR)/hw.o -o $(BUILD)/$(APP)
	@echo --- $(APP) built ---
	@echo ===== Success! =====

$(OBJDIR)/hw.o: $(SRC)/hw_option2.c
	@echo ---- building stack object ----
	$(CC) -c $(SRC)/hw_option2.c -o $(OBJDIR)/hw.o
	@echo ------------ DONE -------------

# Advanced Data Types executable target
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

hw.txt: hw_option2.h hw_option2.c
	cat hw_option2.h hw_option2.c > hw.txt

$(OBJDIR)/week2_honors.o: week2_honors.c
	$(CC) -c $^ -o $@

honors: $(OBJDIR)/week2_honors.o
	$(CC) $^ -o $(BUILD)/$@.out
