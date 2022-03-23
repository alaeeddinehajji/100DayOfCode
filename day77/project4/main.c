#include <stdio.h>
#include <stdlib.h>

float benifit(int years, int n);

int main (){
    float money = 1000;
    for( int i = 0; i < 30; i++){
        printf("\nWhen Alae have %d he will have %.2f", i , money + benifit(i, money));
    }
    return 0;
}
float benifit(int years, int n){
    float temp = n;
    for(int j=0; j <years ; j++){
        temp += temp * 0.02;
    }
    return temp;
}
