#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[50];
    double price;
} book;

int main()
{
    int i, n;
    book book1, *ptr;

    printf("Enter the number of books in your store: ");
    scanf("%d", &n);

    ptr = (book *)malloc(n * sizeof(book));

    for (i = 0; i < n; ++i)
    {
        printf("Book %d title : ", i + 1);

        scanf("%s", &(ptr + i)->name);
        printf("Enter a price for '%s': ", (ptr + i)->name);
        scanf("%lf", &(ptr + i)->price);
    }

    printf("\nDisplaying Information:\n");
    for (i = 0; i < n; ++i)
        printf("'%s' (%.2lf$)\n", (ptr + i)->name, (ptr + i)->price);
    return 0;
}
