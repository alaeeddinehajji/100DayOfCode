#include <stdio.h>
#include <stdlib.h>

int main()
{

    // This is just a simple project #100dayofcode
    //
    // My twitter Account : @AlaeeddineHajji
    
    char name[30];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  
    printf("Name: ");
    puts(name);    
    return 0;
}
