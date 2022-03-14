#include <stdio.h>

int main() {
    // I learned how to make a Logic circuits "degital logic design course"
    
    
   
 unsigned int a = 60; /* 0011 1100 */
 unsigned int b = 13; /* 0000 1101 */
 int c = 0;
 c = a & b; // 0000 1100 = 12
 printf("Value of c is %d\n", c );
 c = a | b; // 61 = 0011 1101 = 61
 printf("Value of c is %d\n", c );
 c = a ^ b; // 49 = 0011 0001 = 49
 printf("Value of c is %d\n", c );
 c = ~a;    //  1100 0011 = -61
 printf("Value of c is %d\n", c );
    
    return 0;
}
