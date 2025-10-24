CC=gcc
INCDIRS=-I.
OPT=-O0
CFLAGS=-Wall -Wextra -g $(INCDIRS) $(OPT)

# Automatically find all .c files
CFILES=$(wildcard *.c)
# Generate executable names (remove .c extension)
EXECUTABLES=$(CFILES:.c=)

# Default: compile all .c files into separate executables
all: $(EXECUTABLES)

# Rule: each .c file creates its own executable with same name
%: %.c
		$(CC) $(CFLAGS) -o $@ $<

# Clean all executables
clean:
		rm -f $(EXECUTABLES)

.PHONY: all clean
