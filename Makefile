# أضف هذه الأسطر لملف الـ Makefile السابق
LDFLAGS += -L$(PS3DEV)/portlibs/ppu/lib -lreality -lgnm -lm
CFLAGS += -DDEVELOPER_NAME=\"Mr.Mouswi\"

# أمر خاص لدمج أيقونة مخصصة تحمل شعارك
ICON_PATH := assets/ICON0.PNG

$(TARGET).pkg: $(TARGET).self
	@echo "Packaging for PS3 HEN with Mr.Mouswi Signature..."
	make_package_npdrm --contentid UP0001-$(TITLE_ID)_00-0000111122223333 $(TARGET).self
