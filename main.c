#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#define NUM_QUESTIONS 16
#define QUIZ_QUESTIONS 5

void startQuiz();
void writeScore(char playerName[20], float score);
void displayScore();
void showHelp();
void clearInputBuffer();
void clearScreen();

int cmpScores(const void *a, const void *b);

enum menu {
    start = 1,
    scores,
    help,
    quit
};

typedef struct {
    char name[20];
    float score;
} player;

int main() {
    printf("\nWELCOME TO C PROGRAMMING QUIZ\n");
    printf("----------------------------\n");
    printf("1. Start Quiz\n");
    printf("2. Scoreboard\n");
    printf("3. Help\n");
    printf("4. Quit\n");
    printf("----------------------------\n\n");
    printf("Input your choice: ");

    enum menu choice;
    scanf("%d", &choice);
    clearInputBuffer();

    switch (choice) {
        case start:
            clearScreen();
            startQuiz();
            break;
        case scores:
            clearScreen();
            displayScore();
            break;
        case help:
            clearScreen();
            showHelp();
            break;
        case quit:
            printf("Goodbye");
            break;
        default:
            clearScreen();
            printf("Invalid input\n\n");
            main();
            break;
    }

    return 0;
}

void showHelp() {
    printf("\nThis is a simple Quiz program using C programming language.\n");
    printf("----------------------------\n");
    printf("You will be asked 5 questions.\n");
    printf("You can choose the correct answer from the given options.\n");
    printf("Input the alphabet of the correct answer. Eg: a\n");
    printf("At the end of the Quiz, you will get the score.\n");
    printf("Your score will be calculated and displayed at the scoreboard menu.\n\n");
    printf("Input any key to go back to main menu\n");

    getchar();
    switch (getchar()) {
        default:
            clearScreen();
            main();
            break;
    }
}

void startQuiz() {
    player p;
    char playerName[20], answer;
    float score;
    int n;

    printf("\n");

    printf("Enter your name: ");
    scanf("%s", p.name);
    clearInputBuffer();

    strncpy(playerName, p.name, sizeof(playerName));

    printf("\n");

    printf("Welcome %s! let's start the quiz.\n", p.name);
    printf("----------------------------\n");

    bool question[NUM_QUESTIONS] = {false};

    srand(time(NULL));
    for (int i = 0; i < QUIZ_QUESTIONS; i++) {
        printf("Question %d\n", i + 1);

        do {
            n = (rand() % NUM_QUESTIONS) + 1;
        } while (question[n - 1]);

        question[n - 1] = true;
        
        switch (n) {
            case 1:
                printf("When was the C programming language developed?\n");
                printf("a. 1970\n");
                printf("b. 1972\n");
                printf("c. 1974\n");
                printf("d. 1976\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'b') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 2:
                printf("Who developed the C programming language?\n");
                printf("a. Ken Thompson\n");
                printf("b. Dennis Ritchie\n");
                printf("c. Bill Gates\n");
                printf("d. Steve Jobs\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'b') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 3:
                printf("What is the extension of C file?\n");
                printf("a. .cpp\n");
                printf("b. .c\n");
                printf("c. .html\n");
                printf("d. .java\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'b') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 4:
                printf("Which one is not a data type in C?\n");
                printf("a. int\n");
                printf("b. float\n");
                printf("c. char\n");
                printf("d. string\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'd') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 5:
                printf("Which one is not a valid variable name in C?\n");
                printf("a. name\n");
                printf("b. Name\n");
                printf("c. NAME\n");
                printf("d. 1name\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'd') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 6:
                printf("Which one is not a valid function name in C?\n");
                printf("a. function1\n");
                printf("b. function_1\n");
                printf("c. 1function\n");
                printf("d. FUNCTION1\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'c') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 7:
                printf("Which one is not a valid header file in C?\n");
                printf("a. stdio.h\n");
                printf("b. stdlib.h\n");
                printf("c. string.c\n");
                printf("d. math.h\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'c') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 8:
                printf("Which one is not a valid operator in C?\n");
                printf("a. +\n");
                printf("b. *\n");
                printf("c. /\n");
                printf("d. x\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'd') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 9:
                printf("Which one is not a valid keyword in C?\n");
                printf("a. if\n");
                printf("b. else\n");
                printf("c. do\n");
                printf("d. loop\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'd') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                }
                break;

            case 10:
                printf("Which one is not a valid data type in C?\n");
                printf("a. int\n");
                printf("b. float\n");
                printf("c. string\n");
                printf("d. char\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'c') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 11:
                printf("Which one is not a valid function in C?\n");
                printf("a. gets()\n");
                printf("b. scan()\n");
                printf("c. printf()\n");
                printf("d. main()\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'b') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 12:
                printf("What is the extension of C header file?\n");
                printf("a. .cpp\n");
                printf("b. .c\n");
                printf("c. .h\n");
                printf("d. .java\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'c') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 13:
                printf("What programming language is most similar to C?\n");
                printf("a. C++\n");
                printf("b. Python\n");
                printf("c. Java\n");
                printf("d. JavaScript\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'a') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 14:
                printf("What can C be used for?\n");
                printf("a. Web Development\n");
                printf("b. Machine Learning\n");
                printf("c. Database Management\n");
                printf("d. All of the above\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'd') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 15:
                printf("Which one is a valid integer constant?\n");
                printf("a. 123\n");
                printf("b. 123.45\n");
                printf("c. 123,45\n");
                printf("d. 123e-2\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'a') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            case 16:
                printf("Which one is a valid floating point constant?\n");
                printf("a. 123\n");
                printf("b. 123.45\n");
                printf("c. 123,45\n");
                printf("d. 123e-2\n");
                printf("---------------------------\n");
                printf("Answer: ");
                scanf(" %c", &answer);
                clearInputBuffer();

                if (answer == 'b') {
                    printf("Correct!\n");
                    printf("---------------------------\n");
                    p.score++;
                } else {
                    printf("Wrong!\n");
                    printf("---------------------------\n");
                }
                break;

            default:
                break;
        }
    }

    score = ((p.score / 5) * 100);

    printf("----------------------------\n");
    printf("Your score is %.2f\n", score);
    if (score == 100) {
        printf("Excellent!\n");
    } else if (score >= 80) {
        printf("Good Job!\n");
    } else if (score >= 60) {
        printf("Well Done!\n");
    } else if (score >= 40) {
        printf("You Passed!\n");
    } else {
        printf("You Failed!\n");
    }
    printf("----------------------------\n\n");

    writeScore(playerName, score);

    printf("Input any key to go back to main menu\n");
    getchar();
    switch (getchar()) {
        default:
            clearScreen();
            main();
            break;
    }
}

void writeScore(char playerName[20], float score) {
    FILE *fptr;

    fptr = fopen("scoreboard.txt", "a");

    if (fptr == NULL) {
        perror("Error opening file!");
        exit(1);
    }

    fprintf(fptr, "%s %.2f\n", playerName, score);

    fclose(fptr);
}

void displayScore() {
    player p[10];
    int numPlayers = 0;

    FILE *fptr;
    fptr = fopen("scoreboard.txt", "r");

    if (fptr == NULL) {
        printf("No Player has played the game!\n\n");
        printf("Input any key to go back to main menu\n");
        getchar();
        switch (getchar()) {
            default:
                clearScreen();
                main();
                break;
        }
    }

    while (fscanf(fptr, "%s %f", p[numPlayers].name, &p[numPlayers].score) != EOF) {
        numPlayers++;
    }

    fclose(fptr);

    qsort(p, numPlayers, sizeof(player), cmpScores);

    int numToDisplay = numPlayers < 5 ? numPlayers : 5;

    printf("\nSCOREBOARD\n");
    printf("----------------------------\n");

    for (int i = 0; i < numToDisplay; i++) {
        printf("%d. %s %.2f\n", i + 1, p[i].name, p[i].score);
    }

    printf("----------------------------\n\n");

    printf("Input any key to go back to main menu\n");
    getchar();
    switch (getchar()) {
        default:
            clearScreen();
            main();
            break;
    }
}

int cmpScores(const void *a, const void *b) {
    player *p1 = (player *) a;
    player *p2 = (player *) b;

    return (p2->score - p1->score);
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void clearScreen() {
    system("cls");
}