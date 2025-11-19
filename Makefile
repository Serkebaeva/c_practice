CC=cc
CFLAGS=-std=c11 -Wall -Wextra

# Minimal Makefile: build `main` if `main.c` exists, otherwise build
# `find_matching_pattern`. Link all other .c files so helpers are available.

SRCS := $(wildcard *.c)

ifeq ($(filter main.c,$(SRCS)),main.c)
TARGET := main
SRC := main.c
else
TARGET := find_matching_pattern
SRC := find_matching_pattern.c
endif

OBJS := $(filter-out $(SRC),$(SRCS))

.PHONY: all run clean
all: $(TARGET)

$(TARGET): $(SRC) $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(SRC) $(OBJS)

run: all
	./$(TARGET) $(ARGS)

clean:
	rm -f $(TARGET) a.out *.o