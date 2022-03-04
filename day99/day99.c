#include <stdio.h>
#include <stdlib.h>
#include <math.h> //math library

int main(void)
{
    const PI = 3.141592653589793;
    float radius, calcul; /*  variables */

    printf("To Calculate the Area of the circle\n");
    printf("use this formula: Area = PI * Radius * Radius");
    printf("\n Enter the Radius of the circle to calculate the area : ");
    scanf("%f", &radius);

    calcul = PI * pow(radius, 2);
    printf("\n\n  Okay that's it \n Area of your circle is  %.2f \n\n", calcul);
    return 0;
}
