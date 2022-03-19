#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("ax^2 + bx + c = 0 \nEnter a, b and c values to give you equation solution\n");
    printf("\nvalue of a: ");
    scanf("%f", &a);
    printf("\nvalue of b: ");
    scanf("%f", &b);
    printf("\nvalue of c: ");
    scanf("%f", &c);
  
    //calculate delta
    float delta = b * b + 4 * a * c;
    printf("Delta equal to %f", delta);
  
    if(delta < 0)
       printf("\nthe equation with no solution! sorry\n");
    else{
    float result1 = (-b + sqrt(delta))/(2*a);
    float result2  = (-b - sqrt(delta))/(2*a);
    printf("The equation have two solutions x1= %f and x2 = %f", result1, result2 );
    }

    return 0;

}
