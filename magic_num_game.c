#include <stdio.h>

int main()
{
    int secret = 7;

    int guess;

    printf("-----Welcome to the Magic Number Game-----\n");
    printf("Guess the secret number (1 to 10): ");
    scanf("%d", &guess);

    if (guess == secret)
    {
        printf("CORRECT---You found the Magic Number\n");
    }
    else if (guess < secret)
    {
        printf("TOO LOW---Try a Bigger Number\n");
    }
    else
    {
        printf("TOO HIGH---Try a Smaller Number\n");
    }

    return 0;
}
