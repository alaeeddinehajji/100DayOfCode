#include <stdio.h>
#define PI 3.14 // to define a constant
void main()
{
    // Types
    char number0;
    int number1;
    long long numberLong;
    float number2;
    double number3;
    // day 100 project
    int a;
    int b;
    int c;
    int sum;

    printf("\nHI I'm alaeeddine\n");
    printf("Type 3 numbers to calculate the sum\n");

    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf(" The total is: %d\n\n Thank you", sum);
    return 0;
}