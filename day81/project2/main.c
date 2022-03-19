#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float cost = 0;
    printf("Enter number of papers to print and this program will calculate the cost\n number: ");
    scanf("%d", &n);
    for(int i=0; i < n; i++){
     if(i < 10)
        cost += 0.3;
     else if (i < 25)
        cost += 0.25;
     else
        cost += 0.2;
    }
    printf("the cost is %f", cost);
    return 0;
}
