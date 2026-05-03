#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/process.h>
#include <vsh/pdm.h>
#include "ui.h"        // الملف الذي برمجته في include
#include "converter.h" // ملف منطق التحويل

// حفظ الحقوق برمجياً
const char* DEVELOPER = "Mr.Mouswi";
const char* APP_NAME  = "PS20KGConv Pro";

int main(int argc, const char* argv[]) {
    // تهيئة شاشة العرض
    init_screen();
    
    printf("****************************************\n");
    printf("* %s - Version 1.0       *\n", APP_NAME);
    printf("* Developed by: %s      *\n", DEVELOPER);
    printf("****************************************\n\n");

    printf("[i] Checking for PS2 ISO files in /dev_usb000/PS2ISO/...\n");

    // منطق البحث عن الملفات والتحويل
    if (check_iso_exists("/dev_usb000/PS2ISO/game.iso")) {
        printf("[+] ISO Found! Starting Conversion...\n");
        start_conversion("game.iso");
    } else {
        printf("[!] Error: No PS2 ISO found. Please check your USB drive.\n");
    }

    // الانتظار قبل الإغلاق
    wait_for_user();
    return 0;
}
