# Compiler - whole lotta chatgpt - I needed this explained line by line
CC := gcc

# Flags for the compiler (you can add other flags like -g for debugging)
CFLAGS := -Wall

# the target executables
FOOTBALL_TARGET := football.exe
TEMPERATURE_TARGET := temperature.exe

# Source files
FOOTBALL_SRCS := football.c football_main.c
TEMPERATURE_SRCS := temperature.c temperature_main.c

# Object files
FOOTBALL_OBJS := $(FOOTBALL_SRCS:.c=.o)
TEMPERATURE_OBJS := $(TEMPERATURE_SRCS:.c=.o)

# this is the default target
all: $(FOOTBALL_TARGET) $(TEMPERATURE_TARGET)

# Build football.exe
$(FOOTBALL_TARGET): $(FOOTBALL_OBJS)
	$(CC) $(CFLAGS) $(FOOTBALL_OBJS) -o $(FOOTBALL_TARGET)

# Build temperature.exe
$(TEMPERATURE_TARGET): $(TEMPERATURE_OBJS)
	$(CC) $(CFLAGS) $(TEMPERATURE_OBJS) -o $(TEMPERATURE_TARGET)

# Rule for compiling .c files into .o object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and executables
clean:
	rm -f $(FOOTBALL_OBJS) $(FOOTBALL_TARGET) $(TEMPERATURE_OBJS) $(TEMPERATURE_TARGET)

# Rebuild everything (clean and then build again)
re: clean all
