#include <stdio.h>
#include "include/ui.h"

// بصمة المطور المحمية (Hardcoded)
const char* SIGNATURE = "All Rights Reserved 2026 - Mr.Mouswi";

int main() {
    // عرض شعار ASCII المذكور في المخطط
    printf("   ____  ____ ___  ____  _____   ______                    \n");
    printf("  / __ \\/ ___|__ \\/ __ \\|  _  | / ____/___  ____ _   __   \n");
    printf(" / /_/ /\\___ \\ / / / / / / / / / /   / __ \\/ __ \\ | / /   \n");
    printf("/ ____/____/ / /_/ /_/ /_/ / / /___/ /_/ / / / / |/ /    \n");
    printf("/_/    |____/____/\\____/\\___/  \\____/\\____/_/ /_/|___/     \n");
    printf("\n[By: %s]\n", SIGNATURE);

    // فحص المساحة الحرة (نقطة 9 في مخططك)
    if (check_free_space() < 8) { // 8GB مثلاً
        printf("Error: Not enough space on /dev_hdd0/\n");
        return -1;
    }

    return 0;
}
