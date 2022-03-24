#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,d, Ar[] = {8, 8,9,9,4,5, 6};
    for(int i = 0; i < 4 ; i++){
        printf("\nchoose a position to edit: ");
        scanf("%d", &n);
        printf("Ar[%d] = %d : %d\nChange it to: ",n, Ar[n]);
        scanf("%d", &d);
        Ar[n] = d;
        printf("Ar[%d] = %d", n, Ar[n]);
    }
   return 0;
}
