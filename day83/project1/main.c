#include <stdio.h>
#include <stdlib.h>

/*
ex1:
(Sides of a Triangle) Write a program that reads three nonzero float values and determines
and prints if they could represent the sides of a triangle.
*/

int main()
{
    // This is just a simple project #100dayofcode
    //
    // My twitter Account : @AlaeeddineHajji
    
    float side1 = 0, side2 = 0, side3 = 0; // Triangle sides variables
    printf("Enter 3 values for the triangle sides (cm)\n");

    // Get nonzero values
    while (side1 == 0 || side2 == 0 || side3 == 0)
    {
        if (side1 == 0)
        {
            printf("side 1: ");
            scanf("%f", &side1);
        }
        else if (side2 == 0)
        {
            printf("side 2: ");
            scanf("%f", &side2);
        }
        else
        {
            printf("side 3: ");
            scanf("%f", &side3);
        }
    }

    // print the values
    printf("\nYour values : x = %.2f cm, y = %.2f cm, z = %.2f cm.\n", side1, side2, side3);

    // check if a value is negative (can represent a triangle or not)
    if (side1 <= 0 || (side2 * side3) <= 0)
        printf("With that values you can't represent a triangle\n");
    else
        printf("You can represent a triangle\n");

    return 0;
}
