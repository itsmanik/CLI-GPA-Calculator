#include<stdio.h>
#include"generateReport.c"

float SGPA;

void computeSGPA(int semester, char subjects[100][100], int marks[100]) {
    int grade[100], grade_x_credit[100];

    int sumOfCredits = 0;
    int noOfSubjects = 0;
    int grades[100];
    float sum = 0;
    int credits[100];

    if (semester == 1) {
        credits[0] = 4, credits[1] = 4, credits[2] = 3, credits[3] = 3, credits[4] = 3, credits[5] = 1, credits[6] = 1, credits[7] = 1;
    }

    else if (semester == 2) {
        credits[0] = 4, credits[1] = 4, credits[2] = 3, credits[3] = 3, credits[4] = 3, credits[5] = 1, credits[6] = 1, credits[7] = 1;
    }


    else if (semester == 3) {
        credits[0] = 4, credits[1] = 4, credits[2] = 4, credits[3] = 3, credits[4] = 1, credits[5] = 3, credits[6] = 1, credits[7] = 1, credits[8] = 0;
    }

    else if (semester == 4) {
        credits[0] = 3, credits[1] = 4, credits[2] = 4, credits[3] = 1, credits[4] = 3, credits[5] = 1, credits[6] = 2, credits[7] = 1, credits[8] = 0;
    }

    else if (semester == 5) {
        credits[0] = 3, credits[1] = 4, credits[2] = 4, credits[3] = 1, credits[4] = 3, credits[5] = 2, credits[6] = 3, credits[7] = 2, credits[8] = 0;
    }

    else if (semester == 6) {
        credits[0] = 4, credits[1] = 4, credits[2] = 3, credits[3] = 3, credits[4] = 2, credits[5] = 1, credits[6] = 1, credits[7] = 0;
    }

    else if (semester == 7) {
        int credits[100] = { 4, 4, 4, 3, 3, 6 };
        credits[0] = 4, credits[1] = 4, credits[2] = 4, credits[3] = 3, credits[4] = 3, credits[5] = 6;
    }

    else if (semester == 8) {
        int credits[100] = { 3 ,3, 10 };
        credits[0] = 3, credits[1] = 3, credits[2] = 10;
    }

    for (int i = 0; credits[i] != '\0'; i++) {
        sumOfCredits += credits[i];
        noOfSubjects++;
        grades[i] = (marks[i] / 10) + 1;
        grade_x_credit[i] = grades[i] * credits[i];
        sum += grade_x_credit[i];
    }
    
    SGPA = sum / sumOfCredits;

    generateReport(semester, subjects, marks, SGPA);
}