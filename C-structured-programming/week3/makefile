
# Compiler flags
CC = gcc
CFLAGS = -std=c11

BUILD = ./bin
SRC = 
OBJDIR = $(BUILD)/obj
IDIR = 
APP = hw.out
vpath %.c $(SRC)
vpath %.h $(SRC)
vpath %.o $(OBJDIR)

# Convert source files (.c) to object files (.o)
SRCS = hw.c linked_list.c
OBJS = $(patsubst %.c,%.o,$(SRCS))

# Target for compiling .c files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

# $(OBJDIR)/hw.o: $(SRC)/hw_option2.c
# 	@echo ---- building stack object ----
# 	$(CC) -c $(SRC)/hw_option2.c -o $(OBJDIR)/hw.o
# 	@echo ------------ DONE -------------

# Homework
hw: $(OBJS)
	$(CC) $(OBJDIR)/$^ -o $@ 

clean:
	rm $(BUILD)/*

init:
	mkdir $(BUILD)
	mkdir $(OBJDIR)	

runadt:
	$(BUILD)/$(APP)

debug: 
	gdb $(BUILD)/$(APP)

hw.txt: hw_option2.h hw_option2.c
	cat hw_option2.h hw_option2.c > hw.txt