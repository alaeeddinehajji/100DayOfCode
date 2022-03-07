#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    char expression;
    printf("This is a simple calculator for two numbers\nSelect Your Operation '+','-','*' or '/': ");
    scanf("%c", &expression);
    printf("Select your first number : ");
    scanf("%f", &a);
    printf("Select a number to add to %.2f: ", a);
    scanf("%f", &b);
    switch (expression)
    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        c = a / b;
        break;
    }
    printf("Results:\n%.2f %c %.2f = %.2f", a, expression, b, c);
    return 0;
}
