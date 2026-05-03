# Project Settings
TARGET      := PS20KGConv
TITLE_ID    := MZAD20KG1
CONTENT_ID  := UP0001-$(TITLE_ID)_00-0000111122223333

# Directories
SOURCE_DIR  := source
INCLUDE_DIR := include
BUILD_DIR   := build

# Compiler Settings
CC          := gcc
CFLAGS      := -I$(INCLUDE_DIR) -O2 -Wall
LDFLAGS     := -lcrypto -lz

# Files
SOURCES     := $(wildcard $(SOURCE_DIR)/*.c)
OBJS        := $(patsubst $(SOURCE_DIR)/%.c, $(BUILD_DIR)/%.o, $(SOURCES))

# Main Rules
all: $(TARGET).pkg

$(TARGET).pkg: $(TARGET).self
	@echo "Packaging..."
	make_package_npdrm --contentid $(CONTENT_ID) $(TARGET).self

$(TARGET).self: $(TARGET).elf
	@echo "Signing SELF..."
	make_self $(TARGET).elf $(TARGET).self

$(TARGET).elf: $(OBJS)
	@echo "Linking..."
	$(CC) $(OBJS) $(LDFLAGS) -o $@

$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) *.elf *.self *.pkg

