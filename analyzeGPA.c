#include<stdio.h>

void analyzeGPA() {
    int n;
    float target, rem, avg, prev = 0;
    float sgpa[10];
    printf("Enter semesters completed : ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i < n; i++) {
        // printf("SGPA of sem %d : ", i + 1);
        printf(ANSI_COLOR_CYAN"SGPA of sem %d"ANSI_COLOR_RESET ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET, i + 1);
        scanf("%f", &sgpa[i]);
    }
    int count = 0;
    printf("\nEnter target : ");
    scanf("%f", &target);
    for (int i = 0; i < sgpa[i];i++) {  
        prev = prev + sgpa[i];
        count++;
    }
    avg = prev / count;
    rem = ((8 * target) - prev) / (8 - count);
    if (rem > 10) {
        printf(ANSI_COLOR_RED "\nTarget SGPA is not attainable with current SGPAs" ANSI_COLOR_RESET);
    }
    else {
        printf(ANSI_COLOR_GREEN "\nSGPA required to reach the target CGPA %.2f" ANSI_COLOR_RESET, rem);
    }
}