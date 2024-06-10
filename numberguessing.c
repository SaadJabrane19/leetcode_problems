#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int number,guess,attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("guess a number between 1 and 100 : \n");
    do
    {
        scanf("%d",&guess);
        attempts++;
        if(guess < number)
            printf("higher ! Try again\n");
        else if(guess > number)
            printf("Lower! Try again\n");
        else if (attempts == 3)
            break;
        else
            printf("victory! You guessed the correct number in your %d attempt",attempts);

    } while (attempts < 5);
    printf("Sorry, you've used all 5 attempts. The number was %d.\n", number);
    
    return 0;
}