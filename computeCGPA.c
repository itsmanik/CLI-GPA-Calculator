#include<stdio.h>
#include"generateReport.c"

float cgpa = 8.5;

void computeCGPA(int semester, char subjects[100][100], int marks[100]) {
    int grade[100], grade_x_credit[100];

    if (semester == 1) {
        int credits[100] = { 4, 4, 3, 3, 3, 1, 1, 1};

        int sumOfCredits = 0;
        int noOfSubjects = 0;
        int grades[100];
        float sum = 0;

        for (int i = 0; credits[i] != '\0'; i++) {
            sumOfCredits += credits[i];
            noOfSubjects++;
            grades[i] = (marks[i] / 10) + 1;
            grade_x_credit[i] = grades[i] * credits[i];
            sum += grade_x_credit[i];
        }
        float sgpa = sum / sumOfCredits;
        printf("%f", sgpa);


    }
   
    else if (semester == 2) {
    int credits[100] = { 4, 4, 3, 3, 3, 1, 1, 1};

        int sumOfCredits = 0;
        int noOfSubjects = 0;
        int grades[100];
        float sum = 0;

        for (int i = 0; credits[i] != '\0'; i++) {
            sumOfCredits += credits[i];
            noOfSubjects++;
            grades[i] = (marks[i] / 10) + 1;
            grade_x_credit[i] = grades[i] * credits[i];
            sum += grade_x_credit[i];
        }
        float sgpa = sum / sumOfCredits;
        printf("%f", sgpa);
       
    }
   
   
    else if (semester == 3) {
    int credits[100] = { 4, 4, 4, 3, 1, 3, 1, 1, 0 };

        int sumOfCredits = 0;
        int noOfSubjects = 0;
        int grades[100];
        float sum = 0;

        for (int i = 0; credits[i] != '\0'; i++) {
            sumOfCredits += credits[i];
            noOfSubjects++;
            grades[i] = (marks[i] / 10) + 1;
            grade_x_credit[i] = grades[i] * credits[i];
            sum += grade_x_credit[i];
        }
        float sgpa = sum / sumOfCredits;
        printf("%f", sgpa);
   
       
    }
   
    else if (semester == 4){
    int credits[100] = { 3, 4, 4, 1, 3, 1, 2, 1, 0 };

        int sumOfCredits = 0;
        int noOfSubjects = 0;
        int grades[100];
        float sum = 0;

        for (int i = 0; credits[i] != '\0'; i++) {
            sumOfCredits += credits[i];
            noOfSubjects++;
            grades[i] = (marks[i] / 10) + 1;
            grade_x_credit[i] = grades[i] * credits[i];
            sum += grade_x_credit[i];
        }
        float sgpa = sum / sumOfCredits;
        printf("%f", sgpa);
   
   
    }
   
     else if (semester == 5){
    int credits[100] = { 3, 4, 4, 1, 3, 2, 3, 2, 0 };

        int sumOfCredits = 0;
        int noOfSubjects = 0;
        int grades[100];
        float sum = 0;

        for (int i = 0; credits[i] != '\0'; i++) {
            sumOfCredits += credits[i];
            noOfSubjects++;
            grades[i] = (marks[i] / 10) + 1;
            grade_x_credit[i] = grades[i] * credits[i];
            sum += grade_x_credit[i];
        }
        float sgpa = sum / sumOfCredits;
        printf("%f", sgpa);
   
   
    }
   
     else if (semester == 6){
    int credits[100] = { 4, 4, 3, 3, 2, 1, 1, 0 };

        int sumOfCredits = 0;
        int noOfSubjects = 0;
        int grades[100];
        float sum = 0;

        for (int i = 0; credits[i] != '\0'; i++) {
            sumOfCredits += credits[i];
            noOfSubjects++;
            grades[i] = (marks[i] / 10) + 1;
            grade_x_credit[i] = grades[i] * credits[i];
            sum += grade_x_credit[i];
        }
        float sgpa = sum / sumOfCredits;
        printf("%f", sgpa);
   
   
    }
   
     else if (semester == 7){
    int credits[100] = { 4, 4, 4, 3, 3, 6};

        int sumOfCredits = 0;
        int noOfSubjects = 0;
        int grades[100];
        float sum = 0;

        for (int i = 0; credits[i] != '\0'; i++) {
            sumOfCredits += credits[i];
            noOfSubjects++;
            grades[i] = (marks[i] / 10) + 1;
            grade_x_credit[i] = grades[i] * credits[i];
            sum += grade_x_credit[i];
        }
        float sgpa = sum / sumOfCredits;
        printf("%f", sgpa);
   
   
    }
   
     else if (semester == 8){
    int credits[100] = { 3 ,3, 10};

        int sumOfCredits = 0;
        int noOfSubjects = 0;
        int grades[100];
        float sum = 0;

        for (int i = 0; credits[i] != '\0'; i++) {
            sumOfCredits += credits[i];
            noOfSubjects++;
            grades[i] = (marks[i] / 10) + 1;
            grade_x_credit[i] = grades[i] * credits[i];
            sum += grade_x_credit[i];
        }
        float sgpa = sum / sumOfCredits;
        printf("%f", sgpa);
   
   
    }
    generateReport(semester, subjects, marks, cgpa);
}