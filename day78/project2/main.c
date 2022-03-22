#include <stdio.h>
#include <stdlib.h>
    // This is just a simple counter using what I had learned today
    //
    // My twitter Account : @AlaeeddineHajji

int main()
{
    printf(" x* y   ");
    for(int i = 1; i < 10; i++)
        printf("  %d ",i);
    for(int i = 1; i < 10; i++){
        printf("\n  %i      ", i);
            for( int j = 1; j < 10;  j++ ){
                printf(" %d ",j * i);
            }

    }
    return 0;
}
