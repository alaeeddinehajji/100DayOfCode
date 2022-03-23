#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, n_premier = 0, counter = 0;
    printf("Enter how many premier numbers you want: ");
    scanf("%d", &n);

    while(n_premier != n ){
        counter++;
        int cout = 0;

        for(int j =1 ; j <= counter  ; j++){
            if(counter % j == 0)
                cout += 1;
        }
        if(cout == 2){
             n_premier += 1;
             printf("%d, ", counter);
        }

    }
    return 0;
}
