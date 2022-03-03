#include <stdio.h>
#include <stdlib.h>

int main()
{

    float Lenght, Width; // Rectangle parameters
    double A, P;         // Variables for Rectangle area and perimeter

    printf("Rectangle Calculator (Area and Perimeter)\n");
    printf("Enter your Rectangle's Length (cm): ");
    scanf("%f", &Lenght);

    printf("Enter your Rectangle's Width (cm): ");
    scanf("%f", &Width);

    P = 2 * (Lenght + Width); // calculate the perimeter
    A = Lenght * Width;       // calculate the area

    /* show result to the user */
    printf("\n\nWell done\nYour Rectangle info (Length: %0.2f cm/ Width: %0.2f cm) :\n", Lenght, Width);
    printf("Perimeter = %0.2lf cm\nArea = %0.2lf cm^2 \n", A, P);
    return 0;
}
