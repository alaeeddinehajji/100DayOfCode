#include <stdio.h>
#include <stdlib.h>

void Multiplication (int a) {
      printf ("Multiplication table for %d is : \n", a);
      for(int i = 0; i <= 10; i++){
           printf("%d x %d = %d \n", a, i, a * i);
      }
}

int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    Multiplication(N);
    Multiplication(2);
    return 0;
}
