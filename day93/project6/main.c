#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float Xa, Ya, Xz, Yz;
    float distance;
    printf("This program calculate the distance betweet two points\n");
    printf("Enter cordinates of Point 'A'  (Xa,Ya): ");
    scanf("%f %f", &Xa, &Ya);
    printf("Enter cordinates of Point 'Z'  (Xz,Yz): ");
    scanf("%f %f", &Xz, &Yz);
    distance = sqrt(pow(Xa + Xz, 2) + pow(Ya + Yz, 2));
    printf("The two poits : A(%.2f,%.2f) and Z(%.2f,%.2f)\nThe distance AB is : %.2f", Xa, Ya, Xz, Yz, distance);
    return 0;
}
