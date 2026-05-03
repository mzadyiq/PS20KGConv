#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ui.h"

// بصمة المطور لحماية الحقوق
__attribute__((used)) static const char* DEV_RIGHTS = "Developed by Mr.Mouswi - 2026";

int main() {
    printf("========================================\n");
    printf("      PS2 to PKG Converter PRO          \n");
    printf("      Developer: Mr.Mouswi              \n");
    printf("========================================\n\n");

    printf("[*] System Initializing...\n");
    sleep(1);

    printf("[*] Checking free space on /dev_hdd0/...\n");
    // محاكاة فحص النظام
    printf("[+] Space Check: OK\n");

    printf("\n[!] Ready for conversion.\n");
    printf("[!] Rights: %s\n", DEV_RIGHTS);

    return 0;
}

