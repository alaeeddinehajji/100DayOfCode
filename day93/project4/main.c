#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, sum;
    printf("This program will calculate the avrage of your exams note\n");
    for (int i = 1; i < 5; i++)
    {
        printf("exam %i: ", i);
        scanf("%f", &n);
        sum += n;
    }
    printf("The sum of your notes is %.2f\nYour avrage is %.2f", sum, sum / 4);
    return 0;
}
