#include <stdio.h>
#include <stdlib.h>
/*
 input n = 3;    3*1 --> 3* 9 =
*/
int main()
{
    int n;
    printf("Enter a number to give you multiplication table\nInput: ");
    scanf("%d", &n);
    for(int i = 1; i < 10; i++){
        printf("\n%d * %d = %d", n, i, n * i);
    }
    return 0;
}
