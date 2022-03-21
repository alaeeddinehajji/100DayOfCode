#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,invers = 0, i = 1;
    printf("Enter a integer to give the inverse: ");
    scanf("%d", &n);

   for( int r = n ; r > 9 ; r /= 10 ){
    i *= 10;
   }
    do{
        invers = invers + i * (n % 10);
        n /= 10;
        i /= 10;
    }while( n != 0);
    printf("Your number inverse is %d", invers);
    return 0;
}
