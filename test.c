#include <stdio.h>

// ANSI escape codes for text color
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    int choice;

    // Display ASCII art for the title
    printf("\n");
    printf(ANSI_COLOR_CYAN "  ____        _       _    __          __  _                  _ \n");
    printf(" |  _ \\      (_)     | |   \\ \\        / / | |                | |\n");
    printf(" | |_) | ___  _  __ _| | __\\ \\  /\\  / /__| |__   __ _ ______| |\n");
    printf(" |  _ < / _ \\| |/ _` | |/ _ \\ \\/  \\/ / _ \\ '_ \\ / _` |______| |\n");
    printf(" | |_) | (_) | | (_| | |  __/ \\  /\\  /  __/ |_) | (_| |     | |\n");
    printf(" |____/ \\___/| |\\__,_|_|\\___|  \\/  \\/ \\___|_.__/ \\__,_|     |_|\n");
    printf("            _/ |                                                \n");
    printf("           |__/                                                 \n\n" ANSI_COLOR_RESET);

    // Display options in a colorful box
    printf(ANSI_COLOR_YELLOW "=======================================\n");
    printf("║         Choose an Option       ║\n");
    printf("=======================================\n");
    printf("| " ANSI_COLOR_RED "1. Option 1" ANSI_COLOR_YELLOW "                   ║\n");
    printf("| " ANSI_COLOR_GREEN "2. Option 2" ANSI_COLOR_YELLOW "                   ║\n");
    printf("| " ANSI_COLOR_BLUE "3. Option 3" ANSI_COLOR_YELLOW "                   ║\n");
    printf("| " ANSI_COLOR_MAGENTA "4. Option 4" ANSI_COLOR_YELLOW "                  ║\n");
    printf("| " ANSI_COLOR_CYAN "5. Option 5" ANSI_COLOR_YELLOW "                   ║\n");
    printf("=======================================\n\n" ANSI_COLOR_RESET);

    // Prompt user for choice
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Process user choice
    switch(choice) {
        case 1:
            printf("\nYou selected Option 1.\n");
            break;
        case 2:
            printf("\nYou selected Option 2.\n");
            break;
        case 3:
            printf("\nYou selected Option 3.\n");
            break;
        case 4:
            printf("\nYou selected Option 4.\n");
            break;
        case 5:
            printf("\nYou selected Option 5.\n");
            break;
        default:
            printf("\nInvalid choice! Please enter a number between 1 and 5.\n");
            break;
    }

    return 0;
}
