#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int number, Hearts = 0;
    srand(time(NULL));     // Initialization, should only be called once.
    int r = rand() % (50); // Get a random number between 0 and 50
    printf("This is a simple game I choose a number and you guess the number. You have 8 attempts");
    do
    {
        printf("\nGuest The number I choosed: ");
        scanf("%d", &number);
        Hearts++;
        if (number != r)
        {

            if (number >= r)
                printf("decrease your segguestion!\n");
            else if (number <= r)
                printf("My random number is bigger\n");
        }
        else
        {
            break;
        }

    } while (number != r && Hearts < 8);
    if (Hearts != 8)
        printf("Amazing It's correct '%d'", r);
    else
        printf("you lose the correct number is '%d'", r);
    return 0;
}
