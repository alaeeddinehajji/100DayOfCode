#include <stdio.h>
#include <stdlib.h>

    // This is just a simple project #100dayofcode
    //
    // My twitter Account : @AlaeeddineHajji
    //using same code of day 87 but I used functions

typedef struct
{
    char name[50];
    double price;
} book;
void getBook(book *s, int x);
int main()
{
    int n;
    book book1, *ptr;

    printf("Enter the number of books in your store: ");
    scanf("%d", &n);
    printf("You have %d books\n", n);
    ptr = (book *)malloc(n * sizeof(book));

    for (int i = 0; i < n; ++i)
    {
       getBook(ptr+i,i);
    }

    printf("\nDisplaying Information:\n");
    for (int i = 0; i < n; ++i)
        printf("'%s' (%.2lf$)\n", (ptr + i)->name, (ptr + i)->price);
    return 0;
}
void getBook (book *s, int x){
        printf("Book %d title : ", x + 1);
        scanf("%s", &s->name);
        printf("Enter a price for '%s': ", s->name);
        scanf("%lf", &s->price);
}
