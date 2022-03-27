#include <stdlib.h>
#include <stdio.h>

int main (){
  
   int Ar[] = { 2,5,1,3};
   int *P = Ar+1;
   int *R = P+1;
  
   printf("%d", Ar + 1);
   printf("\n%d", *P );
   printf("\n%d", *R );
    return 0;
}
