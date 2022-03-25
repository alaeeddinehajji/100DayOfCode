#include <stdio.h>
#include <stdlib.h>

int main(){
   int Ar[] = {4, 5, 6, 0, 1, 3, -6, 7,1,-1};

   for(int i = 0; i <9; i++){
    for(int j = i + 1; j <9; j++){
        if(Ar[i] > Ar[j]){
            int temp = Ar[i];
            Ar[i] = Ar[j];
            Ar[j] = temp;
        }
    }
   }
   for(int i=0; i<9; i++)
       printf("%d, ", Ar[i]);
   return 0;
}
