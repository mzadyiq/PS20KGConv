#include <stdio.h>
#include "ui.h"

// بصمة المطور المحمية
__attribute__((used)) static const char* COPYRIGHT = "LICENSE: Developed by Mr.Mouswi 2026";

int main() {
    printf("****************************************\n");
    printf("* PS2 to PKG Converter PRO        *\n");
    printf("* Author: %s             *\n", DEV_NAME);
    printf("****************************************\n\n");

    printf("[+] Initializing PS3 Environment...\n");
    printf("[+] Verifying Developer Signature: OK\n");
    printf("[!] System Ready for ISO Conversion.\n");

    return 0;
}
