# تأكد من إضافة -lcrypto في نهاية سطر الـ LDFLAGS
LDFLAGS += -L$(PS3DEV)/portlibs/ppu/lib -lcrypto -lz

# أخبر المترجم أين يجد ملفاتك التي في الصور (source/include)
CFLAGS += -I./include
SOURCES := $(wildcard source/*.c)
