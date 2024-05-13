#include<stdio.h>
#include"generateReport.c"

float cgpa = 8.5;

void computeCGPA(int semester, char subjects[100][100], int marks[100]) {
    printf("computing....");
    // your code
    generateReport(semester, subjects, marks, cgpa);
}