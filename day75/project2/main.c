#include <stdio.h>
#include <stdlib.h>

int main(){
    int count = 0;
    int Ar[] = { 1, 4, 4, 5, 6,2, 2};
    for(int i =0; i < 7; i++){
        int matches = 0;
        for(int j = 0; j <7; j++){
            if(Ar[i] == Ar[j]){
                 matches ++;
            }

        }
        count++;
        if(matches == 1)
                printf("\nthe number %d is unique in the array", Ar[i]);

        }
  printf("You have %d items in the Array", count);
   return 0;
}
