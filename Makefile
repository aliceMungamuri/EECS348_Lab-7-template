# Compiler settings
CC := gcc
CFLAGS := -Wall

# Executable names
FOOTBALL_TARGET := football.exe
TEMPERATURE_TARGET := temperature.exe

# Source files
FOOTBALL_SRCS := football.c football_main.c temperature.c  # Include temperature.c
TEMPERATURE_SRCS := temperature.c temperature_main.c

# Object files
FOOTBALL_OBJS := $(FOOTBALL_SRCS:.c=.o)
TEMPERATURE_OBJS := $(TEMPERATURE_SRCS:.c=.o)

# Default target (build both programs)
all: football.exe temperature.exe

# Explicit rule to build football.exe
football.exe: $(FOOTBALL_OBJS)
	$(CC) $(CFLAGS) $(FOOTBALL_OBJS) -o football.exe

# Explicit rule to build temperature.exe
temperature.exe: $(TEMPERATURE_OBJS)
	$(CC) $(CFLAGS) $(TEMPERATURE_OBJS) -o temperature.exe

# Rule to compile .c files into .o object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and executables
clean:
	rm -f *.o football.exe temperature.exe

# Rebuild everything (clean and then build again)
re: clean all
