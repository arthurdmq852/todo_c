CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -std=c11 -Iinclude -MMD -MP
SRCS    = $(wildcard src/*.c)
BUILD   = build
OBJS    = $(SRCS:src/%.c=$(BUILD)/%.o)
TARGET  = todo

all: $(TARGET)
	@rm -rf $(BUILD)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(BUILD)/%.o: src/%.c
	@mkdir -p $(BUILD)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD) $(TARGET)

-include $(OBJS:.o=.d)

.PHONY: all clean
