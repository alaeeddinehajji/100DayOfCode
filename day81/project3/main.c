#include <stdio.h>
#include <stdlib.h>

int main()
{
   float note, moyen = 0;

   for(int i = 0; i < 3 ; i++){
    printf("Enter a note: ");
    scanf("%f", &note);
        moyen += note;
    }

   printf("\nyour final note is %.2f", moyen/3);
    return 0;

}
