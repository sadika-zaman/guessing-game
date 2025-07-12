#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num, guess, i = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;
    printf("%d", num);

    printf("Make a guess chucklenuts: ");

    gu:

    scanf("%d", &guess);

    if (guess > num)
    {
        printf("Too big.\nBet thats the first time you heard that.\n\n\nGuess again.\n");
            i += 1;
            goto gu;

    }
    else if (guess < num)
    {
        printf("Too small.\nBet you're tired of hearing that.\n\n\nGuess again.\n");
            i += 1;
            goto gu;

    }
    else
    {
        printf("Huh, you guessed it.");
    }



    printf("\nIt took you %d times to guess a damn number....", i);




return 0;
}
