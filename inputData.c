#include<stdio.h>
#include"computeCGPA.c"

int semester = 2;
char subjects[100][100] = {"math", "bio", "chem"};
int marks[100] = {1, 2, 3};

void inputData() {
    printf("inputting data");
    // your code
    computeCGPA(semester, subjects, marks);
}