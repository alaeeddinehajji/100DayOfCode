#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    // This is just a simple counter using what I had learned today
    //
    // My twitter Account : @AlaeeddineHajji

int main()
{
   float num1 = 0, num2 = 0, result = 0;
   int oper = 2;
   char operation_char;
    menu:
    printf("Calculator by Aladin\nMENUE:\n----------------------------\n");
    printf("1 - Addition.\n");
    printf("2 - Subtraction.\n");
    printf("3 - Multiplication.\n");
    printf("4 - Devise.\n");
    printf("5 - Power of n.\n");
    printf("Enter the number of your operation : ");
    scanf("%d", &oper);

   printf("You selected the operation \nEnter the first number: ");
   scanf("%f", &num1);
   printf("Enter the second number: ");
   scanf("%f", &num2);

   switch(oper){
   case 1:
       result = num1 + num2;
       operation_char = '+';
       break;
    case 2:
       result = num1 - num2;
              operation_char = '-';
       break;
    case 3:
       result = num1 * num2;
              operation_char = '*';
       break;
    case 4:
        if( num2 != 0){
           result = num1 / num2;
                  operation_char = '/';
        }else{
        printf("You can't devise by 0");
        goto menu;
        }
       break;
    case 5:
       result = pow(num1, num2);
              operation_char = '^';
       break;
default: printf("\nWe get an ERROR")goto menu;
break;

   }
    printf("%.2f %c %.2f = %.2f", num1, operation_char, num2, result);
    return 0;
}
