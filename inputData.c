#include<stdio.h>
#include"computeSGPA.c"
#include<string.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

char subjects[100][100];
int semester;
int marks[100];

void inputData() {

    printf("Enter your semester number (1-8)"ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET);
    scanf("%d", &semester);
    printf("\n");
    switch (semester) {
    case 1:
    {
        strcpy(subjects[0], "Mathematics");
        strcpy(subjects[1], "Applied Physics for CSE Stream");
        strcpy(subjects[2], "Principles of Programming Using C");
        strcpy(subjects[3], "Engineering Science Course");
        strcpy(subjects[4], "Emerging Technology Course OR Programming Language Course");
        strcpy(subjects[5], "Communicative English OR Professional Writing Skills in English");
        strcpy(subjects[6], "Samskrutika Kannada / Balake Kannada OR Indian Constitution");
        strcpy(subjects[7], "Innovation and Design Thinking OR Scientific Foundations of Health");
        printf("Enter your marks obtained in" ANSI_COLOR_YELLOW"\n"ANSI_COLOR_RESET);
        for (int i = 0;i < 8;i++) {
            printf(ANSI_COLOR_CYAN"%s"ANSI_COLOR_RESET ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET, subjects[i]);
            scanf("%d", &marks[i]);
        }
        break;
    }

    case 2:
    {

        strcpy(subjects[0], "Mathematics");
        strcpy(subjects[1], "Applied Chemistry for CSE Stream");
        strcpy(subjects[2], "Computer-Aided Engineering Drawing");
        strcpy(subjects[3], "Engineering Science Course");
        strcpy(subjects[4], "Emerging Technology Course - I/II OR Programming Language Course");
        strcpy(subjects[5], "Communicative English OR Professional Writing Skills in English");
        strcpy(subjects[6], "Samskrutika Kannada / Balake Kannada OR Indian Constitution");
        strcpy(subjects[7], "Innovation and Design Thinking OR Scientific Foundations of Health");
        printf("Enter your marks obtained in" ANSI_COLOR_YELLOW"\n"ANSI_COLOR_RESET);
        for (int i = 0;i < 8;i++) {
            printf(ANSI_COLOR_CYAN"%s"ANSI_COLOR_RESET ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET, subjects[i]);
            scanf("%d", &marks[i]);
        }
        break;
    }

    case 3:
    {
        strcpy(subjects[0], "Mathematics for Computer Science");
        strcpy(subjects[1], "Digital Design & Computer Organization");
        strcpy(subjects[2], "Operating Systems");
        strcpy(subjects[3], "Data Structures and Applications");
        strcpy(subjects[4], "Data Structures Lab");
        strcpy(subjects[5], "ESC/ETC/PLC");
        strcpy(subjects[6], "Social Connect and Responsibility");
        strcpy(subjects[7], "Ability Enhancement Course/Skill Enhancement Course");
        strcpy(subjects[8], "NSS/PE/Yoga");
        printf("Enter your marks obtained in" ANSI_COLOR_YELLOW"\n"ANSI_COLOR_RESET);
        for (int i = 0;i < 9;i++) {
            printf(ANSI_COLOR_CYAN"%s"ANSI_COLOR_RESET ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET, subjects[i]);
            scanf("%d", &marks[i]);
        }
        break;
    }

    case 4:
    {

        strcpy(subjects[0], "Analysis & Design of Algorithms");
        strcpy(subjects[1], "Microcontrollers");
        strcpy(subjects[2], "Database Management Systems");
        strcpy(subjects[3], "Analysis & Design of Algorithms Lab");
        strcpy(subjects[4], "ESC/ETC/PLC");
        strcpy(subjects[5], "Ability Enhancement Course/Skill Enhancement Course");
        strcpy(subjects[6], "Biology For Engineers");
        strcpy(subjects[7], "Universal human values course");
        strcpy(subjects[8], "NSS/PE/Yoga");
        printf("Enter your marks obtained in" ANSI_COLOR_YELLOW"\n"ANSI_COLOR_RESET);
        for (int i = 0;i < 9;i++) {
            printf(ANSI_COLOR_CYAN"%s"ANSI_COLOR_RESET ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET, subjects[i]);
            scanf("%d", &marks[i]);
        }
        break;
    }

    case 5:
    {
        strcpy(subjects[0], "Software Engineering & Project Management");
        strcpy(subjects[1], "Computer Networks");
        strcpy(subjects[2], "Theory of Computation");
        strcpy(subjects[3], "Web Technology Lab");
        strcpy(subjects[4], "Professional Elective Course");
        strcpy(subjects[5], "Mini Project");
        strcpy(subjects[6], "Research Methodology and IPR");
        strcpy(subjects[7], "Environmental Studies");
        strcpy(subjects[8], "NSS/PE/Yoga");
        printf("Enter your marks obtained in" ANSI_COLOR_YELLOW"\n"ANSI_COLOR_RESET);
        for (int i = 0;i < 9;i++) {
            printf(ANSI_COLOR_CYAN"%s"ANSI_COLOR_RESET ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET, subjects[i]);
            scanf("%d", &marks[i]);
        }
        break;
    }

    case 6:
    {
        strcpy(subjects[0], "Cloud Computing (Open Stack /Google)");
        strcpy(subjects[1], "Machine Learning");
        strcpy(subjects[2], "Professional Elective Course");
        strcpy(subjects[3], "Open Elective Course");
        strcpy(subjects[4], "Project Phase I");
        strcpy(subjects[5], "Machine Learning lab");
        strcpy(subjects[6], "Ability Enhancement Course/Skill Development Course");
        strcpy(subjects[7], "NSS/PE/Yoga");
        printf("Enter your marks obtained in" ANSI_COLOR_YELLOW"\n"ANSI_COLOR_RESET);
        for (int i = 0;i < 8;i++) {
            printf(ANSI_COLOR_CYAN"%s"ANSI_COLOR_RESET ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET, subjects[i]);
            scanf("%d", &marks[i]);
        }
        break;
    }

    case 7:
    {
        strcpy(subjects[0], "Internet of Things");
        strcpy(subjects[1], "Parallel Computing");
        strcpy(subjects[2], "Cryptography & Network Security");
        strcpy(subjects[3], "Professional Elective Course");
        strcpy(subjects[4], "Open Elective Course");
        strcpy(subjects[5], "Major Project Phase-II");
        printf("Enter your marks obtained in" ANSI_COLOR_YELLOW"\n"ANSI_COLOR_RESET);
        for (int i = 0;i < 6;i++) {
            printf(ANSI_COLOR_CYAN"%s"ANSI_COLOR_RESET ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET, subjects[i]);
            scanf("%d", &marks[i]);
        }
        break;
    }

    case 8:
    {
        strcpy(subjects[0], "Professional Elective (Online Courses) Only through NPTEL");
        strcpy(subjects[1], "Open Elective (Online Courses) Only through NPTEL");
        strcpy(subjects[2], "Internship (Industry/Research)");
        printf("Enter your marks obtained in" ANSI_COLOR_YELLOW"\n"ANSI_COLOR_RESET);
        for (int i = 0;i < 3;i++) {
            printf(ANSI_COLOR_CYAN"%s"ANSI_COLOR_RESET ANSI_COLOR_YELLOW": "ANSI_COLOR_RESET, subjects[i]);
            scanf("%d", &marks[i]);
        }
        break;
    }
    }
    computeSGPA(semester, subjects, marks);
}