CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11 -Iinclude
SRC     = $(shell find src -name '*.c')
OBJ     = $(SRC:src/%.c=build/%.o)
BIN     = build/todo

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $@

build/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build

.PHONY: all clean
