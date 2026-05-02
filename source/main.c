#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>

// ============ الحقوق ============
#define APP_NAME    "PS2 to PKG Converter"
#define APP_AUTHOR  "Mr.Mouswi"
#define APP_RIGHTS  "LEGAL PROGRAMMING AND DEVELOPMENT"
#define APP_YEAR    "2026"
#define APP_VERSION "v4.0 Ultimate"

// ============ الألوان ============
#define CLR_RED     "\033[1;31m"
#define CLR_GREEN   "\033[1;32m"
#define CLR_YELLOW  "\033[1;33m"
#define CLR_BLUE    "\033[1;34m"
#define CLR_CYAN    "\033[1;36m"
#define CLR_WHITE   "\033[1;37m"
#define CLR_RESET   "\033[0m"

// ============ مفاتيح التشفير ============
static const unsigned char PS2_KEY[16] = {0xAD,0x7E,0x9C,0x2B,0x3F,0x1A,0x56,0x0D,0x8E,0x4B,0x9C,0x2D,0x3F,0x1A,0x56,0x0D};
static const unsigned char PS2_IV[16]  = {0x1A,0x2B,0x3C,0x4D,0x5E,0x6F,0x70,0x81,0x92,0xA3,0xB4,0xC5,0xD6,0xE7,0xF8,0x09};

// ============ دوال مساعدة ============
void print_line(void) { printf(CLR_BLUE "----------------------------------------\n" CLR_RESET); }
void print_ok(const char *msg) { printf(CLR_GREEN "[OK] %s\n" CLR_RESET, msg); }
void print_err(const char *msg) { printf(CLR_RED "[ERROR] %s\n" CLR_RESET, msg); }
void print_info(const char *msg) { printf(CLR_YELLOW "[INFO] %s\n" CLR_RESET, msg); }

// ============ الدالة الرئيسية ============
int main(void) {
    // عرض الشعار والحقوق
    printf(CLR_CYAN);
    printf("  _____   _____ ____   _  __ ____  _  __ _____\n");
    printf(" |  __ \\ / ____/ __ \\ | |/ // __ \\| |/ // ____|\n");
    printf(" | |__) | (___| |  | || ' /| |  | || ' /| |\n");
    printf(" |  ___/ \\___ \\| |  | ||  < | |  | ||  < | |\n");
    printf(" | |     ____) | |__| || . \\| |__| || . \\| |____\n");
    printf(" |_|    |_____/ \\____/ |_|\\_\\\\____/ |_|\\_\\_____|\n");
    printf(CLR_RESET);
    printf(CLR_YELLOW "  %s - %s\n" CLR_RESET, APP_AUTHOR, APP_RIGHTS);
    printf(CLR_BLUE "  %s  (c) %s\n\n" CLR_RESET, APP_VERSION, APP_YEAR);

    // القائمة الرئيسية (نسخة مبسطة للتجربة)
    print_line();
    printf("  " CLR_GREEN "1." CLR_RESET " Convert ISO to PKG (coming soon)\n");
    printf("  " CLR_GREEN "2." CLR_RESET " About\n");
    printf("  " CLR_GREEN "3." CLR_RESET " Exit\n");
    print_line();
    printf("  Choice: ");

    int choice;
    scanf("%d", &choice);

    if (choice == 2) {
        print_line();
        printf("  " CLR_CYAN "ABOUT\n" CLR_RESET);
        print_line();
        printf("  App:    %s\n", APP_NAME);
        printf("  Version: %s\n", APP_VERSION);
        printf("  Author:  %s\n", APP_AUTHOR);
        printf("  Rights:  %s\n", APP_RIGHTS);
        printf("  Year:    %s\n", APP_YEAR);
        print_line();
    }

    print_info("Goodbye!");
    return 0;
}
