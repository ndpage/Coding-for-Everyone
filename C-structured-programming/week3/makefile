
# Compiler flags
CC = gcc
CFLAGS = -std=c99

BUILD = build
SRC = 
OBJDIR = $(BUILD)
IDIR = 
APP = $(BUILD)/hw.out

# Convert source files (.c) to object files (.o)
SRCS = hw.c linked_list.c
OBJS = $(patsubst %.c,%.o,$(SRCS))

vpath %.c $(SRC)
vpath %.h $(SRC)
vpath %.out $(BUILD)
vpath %.o $(OBJDIR)

# $(OBJDIR)/hw.o: $(SRC)/hw_option2.c
# 	@echo ---- building stack object ----
# 	$(CC) -c $(SRC)/hw_option2.c -o $(OBJDIR)/hw.o
# 	@echo ------------ DONE -------------

# Target for compiling .c files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

# Homework
hw: $(OBJDIR)/hw.o
	$(CC) -o $(APP) $^
	@echo Created $(APP)

clean:
	rm -r $(BUILD)/*

init:
	mkdir -p $(BUILD)
	mkdir -p $(OBJDIR)	

runadt:
	$(BUILD)/$(APP)

debug: 
	gdb $(APP)

hw.txt: hw_option2.h hw_option2.c
	cat hw_option2.h hw_option2.c > hw.txt