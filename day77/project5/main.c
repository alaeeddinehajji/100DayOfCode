#include <stdio.h>
#include <stdlib.h>

int main(){
    int Ar[] = {8,4,3,3,1}, Ar2[5];
    for(int i = 0; i < 5; i++){
        Ar2[i] = Ar[4-i];
    }
    return 0;
}
