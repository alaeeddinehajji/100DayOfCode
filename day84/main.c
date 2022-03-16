#include <stdio.h>
    // This is just a simple project #100dayofcode
    //
    // My twitter Account : @AlaeeddineHajji
    //check this website https://www.programiz.com/c-programming/c-unions
union unionJob
{
   char name[32];
   float salary;
   int workerNo;
} uJob;

struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
   printf("size of union = %d bytes", sizeof(uJob));
   printf("\nsize of structure = %d bytes", sizeof(sJob));
   return 0;
}
