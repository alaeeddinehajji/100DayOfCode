#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50];
  int price;
} book;

int main() {

  book book1;

  strcpy(book1.name, "Atomic Habits");
  book1.price = 5;

  printf("Title: %s\n", book1.name);
  printf("Book price: %d\n", book1.price);

  return 0;
}
