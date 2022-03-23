#include <stdlib.h>
#include <stdio.h>

int main (void){
    float notes[5];
    int n = 0;
    for(int i = 0; i < 5 ; i++){
        printf("Enter a numbe: ");
        scanf("%f", &notes[i]);
        if(notes[i] >9)
            n++;
    }
    printf("You have %d Students pass the exam", n);
    return 0;
}
