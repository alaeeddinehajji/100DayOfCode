#include <stdio.h>
#include <stdlib.h>
#include <time.h> // I'm using this to make delay

int main()
{
    // This is just a simple counter using what I had learned today
    //
    // My twitter Account : @AlaeeddineHajji

    int n1;

    printf("We count to 10 or -10 it's depend on your chosen number\n Choose a number : ");
    scanf("%i", &n1);

    // this is function to make delay
    void delay(int num_sec)
    {
        // Converting time to ms
        int ms = 1000 * num_sec;

        // Storing start time
        clock_t start_time = clock();

        // looping till required time is not achieved
        while (clock() < start_time + ms)
            ;
    }
    if (n1 > 0)
    {
        for (int i = n1; i <= 10; ++i)
        {
            printf("%i \n", i);
            delay(1);
        }
    }
    else
    {
        for (int i = n1; i >= -10; --i)
        {
            printf("%i \n", i);
            delay(1);
        }
    }

    printf("That's it! Follow me on twitter I'm making projects everyday #100DaysOfCode\n\n@AlaeeddineHajji\n\n");
    return 0;
}