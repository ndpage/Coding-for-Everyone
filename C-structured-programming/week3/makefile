
# Compiler flags
CC = gcc
CFLAGS = -std=c99

BUILD = ./bin
SRC = 
OBJDIR = $(BUILD)/obj
IDIR = 
APP = $(BUILD)/hw.out
vpath %.c $(SRC)
vpath %.h $(SRC)
vpath %.o $(OBJDIR)
vpath %.out $(BUILD)

# Convert source files (.c) to object files (.o)
SRCS = hw.c linked_list.c
OBJS = $(patsubst %.c,%.o,$(SRCS))


# $(OBJDIR)/hw.o: $(SRC)/hw_option2.c
# 	@echo ---- building stack object ----
# 	$(CC) -c $(SRC)/hw_option2.c -o $(OBJDIR)/hw.o
# 	@echo ------------ DONE -------------

# Target for compiling .c files to object files
%.o: %.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

# Homework
hw: $(OBJS)
	@echo 
	@echo Linking objects and building hw.out
	@echo Objects: $(OBJS)
	@echo 
	$(CC) $(CFLAGS) $^ -o $(APP)
	@echo Created $(APP)
	@echo 
	$(APP)

clean:
	rm -r $(BUILD)/*

init:
	mkdir $(BUILD)
	mkdir $(OBJDIR)	

runadt:
	$(BUILD)/$(APP)

debug: 
	gdb $(BUILD)/$(APP)

hw.txt: hw_option2.h hw_option2.c
	cat hw_option2.h hw_option2.c > hw.txt