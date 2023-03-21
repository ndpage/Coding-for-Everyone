
# Compiler flags
CC = gcc
CFLAGS = -std=c99

BUILD = build
SRC = 
OBJDIR = $(BUILD)
IDIR = 
APP = $(BUILD)/hw.out

# Convert source files (.c) to object files (.o)
SRCS = fileio.c
OBJS = $(addprefix $(OBJDIR)/, $(patsubst %.c,%.o,$(SRCS)))

vpath %.c $(SRC)
vpath %.h $(SRC)
vpath %.out $(BUILD)
vpath %.o $(OBJDIR)

all: $(OBJS)
	$(CC) -o $(APP) $^

fileio: $(OBJDIR)/fileio.o
	$(CC) -o $(BUILD)/$@.out $^

# Homework
hw: $(OBJDIR)/hw.o
	@echo BUlIDING: 
	$(CC) -o $(OBJDIR)/$@.out $^
	@echo Created $(APP)

# Target for compiling .c files to object files
$(OBJDIR)/%.o: %.c
	@echo COMPILING
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -r $(BUILD)/*

init:
	mkdir -p $(BUILD)
	mkdir -p $(OBJDIR)

runadt:
	$(BUILD)/$(APP)

debug: 
	gdb $(APP)

