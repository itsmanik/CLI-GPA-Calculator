#include<stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


void displayReport(int semester, char subjects[100][100], int marks[100], float SGPA, int noOfSubjects) {
    printf("\n");
    printf(ANSI_COLOR_GREEN"SEMESTER"ANSI_COLOR_YELLOW":"ANSI_COLOR_RESET "%d\n\n"ANSI_COLOR_RESET, semester);
    printf(ANSI_COLOR_YELLOW"+---------------------------------------------------------------------------------+\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW"|"ANSI_COLOR_RESET   " SUBJECT                                                                 "ANSI_COLOR_YELLOW"|"ANSI_COLOR_RESET" MARKS "ANSI_COLOR_YELLOW"|\n");
    printf(ANSI_COLOR_YELLOW"+-------------------------------------------------------------------------+-------+\n"ANSI_COLOR_RESET);
    for (int i = 0; i < noOfSubjects; i++) {
        printf(ANSI_COLOR_YELLOW"| "ANSI_COLOR_RESET "%-70s  "ANSI_COLOR_YELLOW"|"ANSI_COLOR_RESET"%4d   "ANSI_COLOR_YELLOW"|\n"ANSI_COLOR_RESET, subjects[i], marks[i]);
    }
    printf(ANSI_COLOR_YELLOW"+---------------------------------------------------------------------------------+\n\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN"SGPA"ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET "%.2f\n", SGPA);
}