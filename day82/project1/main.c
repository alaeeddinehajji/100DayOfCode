#include <stdio.h>
#include <stdlib.h>

int check(int a, int b);
int main()
{
    int A = 4,B = -32;
    if(0 == check(A,B) )
        printf("The number is negative");
    else
        printf("The number is positive");

    return 0;
}
int check(int a , int b){
    if(a*b < 0){
        return 0;
    }else
    return 1;

}
