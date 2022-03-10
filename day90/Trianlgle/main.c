#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x;
    printf("Enter a size fot the triangle (ex.15): ");
    scanf("%d", &x);
    if (x % 2 == 1)
        x++;
    for (int i = 0; i <= x / 2; i++)
    {

        for (int p = 0; p <= x; p++)
        {
            if (p < x - (x / 2) - i)
                printf("   ");
        }
        for (int c = 0; c < (i * 2 - 1); c++)
        {
            if (c == 0 || c == 2 * i - 2 || i == x / 2)
                printf("*  ");
            else
                printf("   ");
        }

        printf("\n");
    }
    return 0;
}
