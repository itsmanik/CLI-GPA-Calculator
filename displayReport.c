#include<stdio.h>

void displayReport(int semester, char subjects[100][100], int marks[100], float SGPA, int noOfSubjects) {
    printf("SEMESTER: %d\n\n", semester);
    printf("+---------------------------------------------------------------------------------+\n");
    printf("| SUBJECT                                                                 | MARKS |\n");
    printf("+-------------------------------------------------------------------------+-------+\n");
    for (int i = 0; i < noOfSubjects; i++) {
    printf("| %-71s |%4d   |\n", subjects[i], marks[i]);
    }
    printf("+---------------------------------------------------------------------------------+\n\n");
    printf("SGPA: %.2f\n", SGPA);
}