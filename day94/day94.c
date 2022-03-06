// I learned about Arrays (I got an idea where I can use 3d arrays)
// C Program to see enter how many families in the apartment and and how many person in each family and save some information about each person
// Then the program give some analysis
#include <stdio.h>
#include <stdlib.h>

// This is just a simple project #100dayofcode
//
// My twitter Account : @AlaeeddineHajji

int main()
{
    int families;
    int c[10][10][2];

    printf("How many families in the apartment? : ");
    scanf("%i", &families);
    for (int f = 0; f < families; f++)
    {
        int persons;
        printf("\nIn the family %d,How many people ? :", f + 1);
        scanf("%d", &persons);
        printf("\n");
        c[f][persons - 1][2];
        for (int p = 0; p < persons; p++)
        {
            int tall = 0, weight = 0;
            printf("In family %d,person %d:\nHow tall he is? :", f + 1, p + 1);
            scanf("%d", &tall);
            printf("How much does he weight? :");
            scanf("%d", &weight);
            c[f][persons][0] = tall;
            c[f][persons][1] = weight;
        }
    }

    printf("\nDisplaying the results :\n");
    int totoal_people, pesonsInFamily;
    for (int o = 0; o < families; ++o)
    {
        printf("\nFamily %d:\n", o + 1);
        pesonsInFamily = 1; // It's just 1 for now because I don't know how to get array size I tried 'length = sizeof(a) / sizeof(int)'
        for (int p = 0; p < pesonsInFamily; ++p)
        {
            totoal_people++;
            printf("Person [%d]: tall [%d] weight[%d] \n", p + 12, c[o][p][0], c[o][p][1]);
            printf("If there is onother persons sorry "); // I will update this code in the future #100dayOfcode
        }
    }
    printf("\nin totlal we have %d families and %d people in the apartment", families, totoal_people);
    return 0;
}