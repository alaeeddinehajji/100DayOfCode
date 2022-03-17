#include <stdio.h>
#include <stdlib.h>

/*     // Homework_3
ex2:
(Sides of a Right Triangle) Write a program that reads three nonzero integers and determines
and prints if they could be the sides of a right triangle.
*/

    // This is just a simple project #100dayofcode
    //
    // My twitter Account : @AlaeeddineHajji  

int main()
{

    int side1 = 0, side2 = 0, side3 = 0;
    printf("Enter your triangle sides with integer values (cm) to check if it's a right triangle or not\n");
    // right triangle example: 15, 17, 8
    printf("right triangle example: 15, 17, 8\n");
    while (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {

        if (side1 <= 0)
        {
            printf("side 1: ");
            scanf("%d", &side1);
        }
        else if (side2 <= 0)
        {
            printf("side 2: ");
            scanf("%d", &side2);
        }
        else
        {
            printf("side 3: ");
            scanf("%d", &side3);
        }
    }

    // print the values
    printf("\nYour values : side1 = %d cm, side2 = %d cm, side3 = %d cm.\n", side1, side2, side3);
    int A = side1 * side1, B = side2 * side2, C = side3 * side3;

    // check if it's a right triangle using a^2 + b^2 = c^2
    if (A == B + C || B == A + C || C == A + B)
        printf("With those values you have right triangle\n");
    else
        printf("Your triangle is not right triangle\n");

    return 0;
}
