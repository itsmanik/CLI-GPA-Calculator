#include<stdio.h>

void analyzeGPA() {
    int n;
    float target, rem, avg, prev = 0;
    float sgpa[10];
    printf("Enter semesters completed : ");
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        printf("SGPA of sem %d : ", i + 1);
        scanf("%f", &sgpa[i]);
    }
    int count = 0;
    printf("Enter target : ");
    scanf("%f", &target);
    for (int i = 0;i < sgpa[i];i++) {
        prev = prev + sgpa[i];
        count++;
    }
    avg = prev / count;
    rem = ((8 * target) - prev) / (8 - count);
    if (rem > 10) {
        printf("Target SGPA is not attainable with current SGPAs");
    }
    else {
        printf(" SGPA required to reach the target CGPA %f", rem);
    }
}