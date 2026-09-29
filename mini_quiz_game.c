#include <stdio.h>
#include <string.h>

int main()
{
    char answer[20];
    int score = 0;

    printf("===== MINI QUIZ GAME =====\n\n");

    printf("1. What is the capital of India?\n");
    printf("Your answer: ");
    scanf("%s", answer);

    if (strcmp(answer, "Delhi") == 0 || strcmp(answer, "delhi") == 0)
    {
        printf("Correct! 🎉\n");
        score++;
    }
    else
    {
        printf("Wrong! ❌\n");
    }

    printf("\n\n2. Which language are you learning?\n");
    printf("Your answer: ");
    scanf("%s", answer);

    if (strcmp(answer, "C") == 0 || strcmp(answer, "c") == 0)
    {
        printf("Correct! 🎉\n");
        score++;
    }
    else
    {
        printf("Wrong! ❌\n");
    }

    printf("\n\n3. How many days are there in a week?\n");
    printf("Your answer: ");
    scanf("%s", answer);

    if (strcmp(answer, "7") == 0)
    {
        printf("Correct! 🎉\n");
        score++;
    }
    else
    {
        printf("Wrong! ❌\n");
    }

    printf("\n\n===== QUIZ COMPLETED =====\n");
    printf("Your score: %d / 3\n", score);

    if (score == 3)
    {
        printf("Excellent! 🔥\n");
    }
    else if (score == 2)
    {
        printf("Good job! 👏\n");
    }
    else if (score == 1)
    {
        printf("Keep practicing! 💪\n");
    }
    else
    {
        printf("Don't give up! 😊\n");
    }

    return 0;
}
