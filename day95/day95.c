#include <stdio.h>
void add();
int number = 1; // global variable

// This is just a simple project #100dayofcode
//
// My twitter Account : @AlaeeddineHajji

int main()
{
    add();
    add();
    return 0;
}
void add()
{

    number += 5;
    printf("%d  ", number);
}