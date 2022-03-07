#include <stdio.h>
#include <stdlib.h>

int main()
{
    // this is just a math challenge

    // My twitter Account : @AlaeeddineHajji
    // set two variables and change the value between them without an other variable
    // int a = 5, b = 2, c;
    // c = a;
    // a = b;
    // b = c;

    int a = 5, b = 2;
    printf("a = %d and b = %d", a, b);
    // this is my solution
    a += b;
    b += a;
    a = b - a;
    b = b - 2 * a;
    // The website solution is
    // a = a + b;
    // b = a - b;
    // a = a - b;
    printf("\nNow:\na = %d and b = %d", a, b);
    return 0;
}
