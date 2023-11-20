#include <stdio.h>

//void startquiz();
//void writescore();
//void displayscore();
void showhelp();

enum menu {start = 1, scores, help, exit};

int main() {
    printf("\nWELCOME TO C PROGRAMMING QUIZ\n");
    printf("----------------------------\n");
    printf("1. Start\n");
    printf("2. Scores\n");
    printf("3. Help\n");
    printf("4. Exit\n");
    printf("----------------------------\n\n");

    enum menu choice;
    scanf("%d", &choice);

    switch (choice) {
        case start:
            //startquiz();
            break;
        case scores:
            //displayscore();
            break;
        case help:
            showhelp();
            break;
        case exit:
            break;
        default:
            printf("Invalid input\n\n");
            main();
            break;
    }

    return 0;
}

void showhelp() {
    printf("\nThis is a simple Quiz program using C programming language.\n");
    printf("You can choose the correct answer from the given options.\n");
    printf("At the end of the Quiz, you will get the score.\n\n");
    printf("Press any key to go back to main menu\n");

    getchar();
    switch (getchar()) {
        default:
            main();
            break;
    }
}

void startquiz() {

}