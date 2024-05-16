#include<stdio.h>
#include"inputData.c"
#include"calculateCGPA.c"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void main() {
    int choice;
    float SGPA, CPGA;

    printf(ANSI_COLOR_YELLOW "=============================\n");
    printf("|       GPA Calculator      |\n");
    printf("=============================\n");
    printf("| "ANSI_COLOR_RESET"1" ANSI_COLOR_YELLOW"."ANSI_COLOR_RESET "Calculate SGPA"  ANSI_COLOR_YELLOW "          |\n");
    printf("| "ANSI_COLOR_RESET"2" ANSI_COLOR_YELLOW"."ANSI_COLOR_RESET "Calculate CGPA"  ANSI_COLOR_YELLOW "          |\n");
    printf("| "ANSI_COLOR_RESET"3" ANSI_COLOR_YELLOW"."ANSI_COLOR_RESET "Analyze GPA"  ANSI_COLOR_YELLOW "             |\n");
    printf("| "ANSI_COLOR_RESET"4"  ANSI_COLOR_YELLOW"." ANSI_COLOR_RESET "Exit"  ANSI_COLOR_YELLOW "                    |\n");
    printf("=============================\n\n" ANSI_COLOR_RESET);
    printf("Enter your choice"ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET);
    scanf("%d", &choice);
    if (choice == 1) {
        // Calculate SGPA
        inputData();
    }
    else if (choice == 2) {
        // Calculate CGPA
        calculateCGPA();
    }
    else {
        printf("Invalid Input");
    }
}