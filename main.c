#include<stdio.h>
#include"inputData.c"
#include"calculateSGPA.c"

void main() {
    int choice;
    float SGPA, CPGA;

    printf("GPA Calculator \n");
    printf("What do you want to calculate?\n");

    printf("1. SGPA\n2. CGPA\n");
    scanf("%d", &choice);
    if (choice == 1) {
        calculateSGPA();
    }
    else if (choice == 2) {
        inputData();
    }
    else {
        printf("Invalid Input");
    }
}