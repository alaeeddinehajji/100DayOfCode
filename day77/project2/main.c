#include <stdio.h>
#include <stdlib.h>
    // This is just a simple project
    //
    // My twitter Account : @AlaeeddineHajji

int smallest(int arra[5]);
int bigest(int arra[5]);
int main()
{
    int Ar[5];
    for(int i = 0; i < 5; i++){
        printf("Enter a number");
        scanf("%i", &Ar[i]);
    }
    printf("small number in the array is %i and the biggest is %d ", smallest(Ar), bigest(Ar));
    return 0;
}

 int smallest(int arra[5]){
       int temp1 = arra[0];
     for(int i = 0; i < 5 ; i++){
        if(temp1 > arra[i])
            temp1 = arra[i];
     }
     return temp1;
 }
 int bigest(int arra[5]){
     int temp = 0;
     for(int i = 0; i < 5 ; i++){
        if(temp < arra[i])
            temp = arra[i];
     }
     return temp;
 }

