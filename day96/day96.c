#include <stdio.h>
#include <stdlib.h>
int main()
{
    char operation;
    double n1, n2;

    // This is just a simple converter using what I had learned
    //
    // My twitter Account : @AlaeeddineHajji

    printf("This is a simple converter\nChoose from the list.\nCentimeter to Feet: Type c\nFahrenheit to Celsius: Type f\nKilometers to Miles: Type k\nPound to Kilogram: Type p\nYour text :");
    scanf("%c", &operation);

    switch (operation)
    {
    case 'c':
        printf("Type a number to Start converting (cm to ft) : ");
        scanf("%lf", &n1);
        n2 = n1 * 0.0328;
        printf("The result is %0.3lf feet", n2);
        break;
    case 'f':
        printf("Type a number to Start converting (celsius to fahrenheit) : ");
        scanf("%lf", &n1);
        n2 = (n1 - 32) * 5 / 9;
        printf("The result is %0.3lf fahrenheit", n2);
        break;
    case 'k':
        printf("Type a number to Start converting (km to miles) : ");
        scanf("%lf", &n1);
        n2 = n1 / 1.6;
        printf("The result is %0.3lf miles", n2);
        break;
    case 'p':
        printf("Type a number to Start converting (pound to kg) : ");
        scanf("%lf", &n1);
        n2 = n1 * 0.453592;
        printf("The result is %0.3lf kg", n2);
        break;

    default:
        printf("somthing wrog try again");
    }

    return 0;
}