#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Hi! enter a integer :  ");
    scanf("%d", &a);
    printf("Choose a power for %d  to display the value : ", a);
    scanf("%i", &b);
    float c = pow(a, b);
    printf("\n(%d power %d) equal to %.2f", a, b, c);
    return 0;
}
