STRIP		:= ppu-strip
OBJCOPY		:= ppu-objcopy
CC			:= ppu-gcc
CXX			:= ppu-g++

TARGET		:= MyPS3App
CONTENT_ID	:= UP0001-$(TARGET)_00-0000000000000000
PKG_FILES	:= pkg

CFLAGS		:= -O2 -Wall
LIBS		:= -lrt -lvp5 -lsysutil -lmsgstep -lnet -lio -lpng -lz

all: $(TARGET).pkg

$(TARGET).elf: main.o
	$(CC) $< $(LIBS) -o $@

$(TARGET).self: $(TARGET).elf
	make_self $< $@

$(TARGET).pkg: $(TARGET).self
	mkdir -p $(PKG_FILES)
	cp $< $(PKG_FILES)/USRDIR/EBOOT.BIN
	# هنا يتم استدعاء أداة بناء الـ PKG المدمجة في البيئة
	pkg_package -o $@ $(PKG_FILES) $(CONTENT_ID)

clean:
	rm -f *.o *.elf *.self *.pkg

