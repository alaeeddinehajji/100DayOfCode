#include <stdio.h>
#include <stdlib.h>
int main()
{
  // This is just a simple project #100dayofcode
  //
  // My twitter Account : @AlaeeddineHajji
  
    float a;
    printf("Hi! What year did you born:  ");
    scanf("%f", &a);
    int b = 2022 - a;
    if( b > 18)
    printf("You are an adult");
    printf("\nYou are %d years old ", b);
    return 0;
}
