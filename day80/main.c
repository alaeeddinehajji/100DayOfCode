#include <stdio.h>
#include <stdlib.h>

int main()
{
     int collection[6],n=0;
     for(int i = 0; i < 6; i++){
        printf("Item %d Id: ", i);
        scanf("%d", &collection[i]);
     }
     printf("\nEnter an Id to check if we have the item\nId: ");
     scanf("%d", &n);
     for(int i = 0 ; i< 6; i++){
        if(n == collection[i]){
                printf("We have that id in the array");
        break;
        }else{
        if(i == 5 )
            printf("sorry but we can't find that id in the array");
        }
     }
    return 0;
}
