#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 5;
    int *p_a;
    // Variables adresse are not in order
    printf("Pointers\n&a = %p, &a+1 = %p and &b = %p\n", &a + 1, &b);
    // Arrays are in order so we can use p+1 or P-1
    int x[5] = {1, 2, 3, 4, 5};
    int *p1, *p2, *p3;

    p1 = &x[0];
    p2 = &x[1];
    p3 = &x[2];
    // int have 4 bytes
    printf("%p %p %p\n", p1, p2, p3);
    printf("%p %p %p", p2 - 1, p2, p2 + 1);

    printf("\nAdreess: %d ,  Variable: %d \n", p1, *p1);

    printf("\nAdreess: %d ,  Variable: %d \n", p_a, *p_a);

    return 0;
}
