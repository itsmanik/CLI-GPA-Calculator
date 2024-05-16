#include<stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

float calculateCGPA()
{
    float sum=0;
    float SGPA[100];
    float CGPA;
    printf("Enter SGPA of 8 semesters"ANSI_COLOR_YELLOW":\n"ANSI_COLOR_RESET);
    printf("\n");
    for(int i=0;i<8;i++)
    {
        printf(ANSI_COLOR_CYAN"Semester %d"ANSI_COLOR_RESET ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET,i+1);
        scanf("%f",&SGPA[i]);
        sum += SGPA[i];
    }

    CGPA = sum/8;
    printf("\n");
    printf(ANSI_COLOR_GREEN "CGPA"ANSI_COLOR_YELLOW":"ANSI_COLOR_RESET" %.2f",CGPA);


}