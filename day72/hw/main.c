#include <stdlib.h>
#include <stdio.h>

/* (Triangle Printing Program )
Write a program that prints the following patterns B and D separately,
one below the other. Use for loops to generate the patterns.
*/

int main()
{
    int n = 18; // number of lines (for the both patterns)

    // pattern 1 (B)
    printf("Pattern 1\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    // pattern 2 (D)
    printf("\nPattern 2\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (n - i - 2 < j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
