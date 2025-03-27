# Compiler settings
CC := gcc
CFLAGS := -Wall

# Executable names
FOOTBALL_TARGET := football.exe
TEMPERATURE_TARGET := temperature.exe

# Source files
FOOTBALL_SRCS := football.c football_main.c temperature.c  # Added temperature.c
TEMPERATURE_SRCS := temperature.c temperature_main.c

# Object files
FOOTBALL_OBJS := $(FOOTBALL_SRCS:.c=.o)
TEMPERATURE_OBJS := $(TEMPERATURE_SRCS:.c=.o)

# Default target (build both programs)
all: $(FOOTBALL_TARGET) $(TEMPERATURE_TARGET)

# Build football.exe (Now includes temperature.c)
$(FOOTBALL_TARGET): $(FOOTBALL_OBJS)
	$(CC) $(CFLAGS) $(FOOTBALL_OBJS) -o $(FOOTBALL_TARGET)

# Build temperature.exe
$(TEMPERATURE_TARGET): $(TEMPERATURE_OBJS)
	$(CC) $(CFLAGS) $(TEMPERATURE_OBJS) -o $(TEMPERATURE_TARGET)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and executables
clean:
	rm -f $(FOOTBALL_OBJS) $(FOOTBALL_TARGET) $(TEMPERATURE_OBJS) $(TEMPERATURE_TARGET)

# Rebuild everything (clean and then build again)
re: clean all
