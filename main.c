#include <stdio.h>

//void startquiz();
void startquiz()
{
    printf("halo");
}
//void writescore();
//void displayscore();
void help();

int main() {
    printf("\nWELCOME TO C PROGRAMMING QUIZ\n");
    printf("----------------------------\n");
    printf("1. Start\n");
    printf("2. Scores\n");
    printf("3. Help\n");
    printf("4. Exit\n");
    printf("----------------------------\n\n");

    int n;
    scanf("%d", &n);

    switch (n) {
        case 1:
            //startquiz();
            break;
        case 2:
            //displayscore();
            break;
        case 3:
            help();
            break;
        case 4:
            break;
        default:
            printf("Invalid input\n\n");
            main();
            break;
    }

    return 0;
}

void help() {
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
