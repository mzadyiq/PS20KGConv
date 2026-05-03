# اسم التطبيق النهائي
TARGET		:= PS20KGConv
# معرف التطبيق (يمكنك تغييره لاحقاً)
TITLE_ID	:= MZAD20KG1

# مسارات المجلدات بناءً على صورك
SOURCE_DIR	:= source
INCLUDE_DIR	:= include
BUILD_DIR	:= build

# البحث عن جميع ملفات .c في مجلد source
SOURCES		:= $(wildcard $(SOURCE_DIR)/*.c)
OBJS		:= $(patsubst $(SOURCE_DIR)/%.c, $(BUILD_DIR)/%.o, $(SOURCES))

# إعدادات المترجم
CC			:= ppu-gcc
CFLAGS		:= -I$(INCLUDE_DIR) -O2 -Wall
LDFLAGS		:= 

# الأهداف الرئيسية
all: $(TARGET).pkg

$(TARGET).pkg: $(TARGET).self
	# هنا نستخدم أداة pkg_helper لإنشاء الحزمة النهائية
	@echo "Creating PKG..."
	make_package_npdrm $(TARGET).self

$(TARGET).self: $(TARGET).elf
	@echo "Creating SELF..."
	make_self $(TARGET).elf $(TARGET).self

$(TARGET).elf: $(OBJS)
	@echo "Linking ELF..."
	$(CC) $(OBJS) $(LDFLAGS) -o $@

$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) *.elf *.self *.pkg
