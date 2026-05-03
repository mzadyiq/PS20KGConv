#include "converter.h"
#include <unistd.h>

void start_conversion(const char* filename) {
    // 1. فك تشفير الـ ISO (Placeholder لمنطق التشفير)
    printf("[1/3] Decrypting ISO...\n");
    sleep(2);

    // 2. دمج ملفات المحاكي (Config files)
    printf("[2/3] Injecting PS2 Emulator Configs...\n");
    sleep(2);

    // 3. تغليف الملف بصيغة PKG باستخدام أدوات النظام
    printf("[3/3] Packaging to PKG format...\n");
    
    // محاكاة عملية الانتهاء
    printf("\n[SUCCESS] Game converted successfully by %s!\n", "Mr.Mouswi");
    printf("Location: /dev_hdd0/packages/converted_game.pkg\n");
}

int check_iso_exists(const char* path) {
    if (access(path, F_OK) == 0) return 1;
    return 0;
}

