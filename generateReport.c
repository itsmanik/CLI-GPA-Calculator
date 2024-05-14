#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SUBJECT_LENGTH 100
#define NUM_SUBJECTS 4


void generateReport(int semester, char subjects[100][100], int marks[100], float SGPA) {
    FILE* ptr;
    ptr = fopen("REPORT.txt", "w");
    if (ptr == NULL) {
        perror("Error creating file");
        exit(EXIT_FAILURE); // Exit program if file opening failed
    }

    // Print semester at the top
    fprintf(ptr, "+---------------------------------+\n");
    fprintf(ptr, "| SEMESTER : %-20d |\n", semester);
    fprintf(ptr, "+---------------------------------+\n");

    // Print header
    fprintf(ptr, "+---------------------------------------------+\n");
    fprintf(ptr, "| SUBJECT                         | MARK |\n");
    fprintf(ptr, "+---------------------------------------------+\n");

    // Print rows
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        fprintf(ptr, "| %-30s | %4d |\n", subjects[i], marks[i]);
        fprintf(ptr, "+---------------------------------------------+\n");
    }
    fprintf(ptr,"SGPA : %f ", SGPA);

    fclose(ptr); // Close the file

}