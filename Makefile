# Makefile for Temperature Conversion Program

# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Output executable name
TARGET = temperature_program

# Source files
SRCS = temperature.c temperature_main.c

# Header files
HEADERS = temperature.h

# Object files (compiled source files)
OBJS = $(SRCS:.c=.o)

# Default target to build the program
all: $(TARGET)

# Rule to link the object files and create the executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Rule to compile the source files into object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean up compiled files
clean:
	rm -f $(OBJS) $(TARGET)

# Rule to remove the executable and object files
fclean: clean
	rm -f $(TARGET)

# Rule to recompile everything
re: fclean all

