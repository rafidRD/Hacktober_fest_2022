#include <stdio.h>

int main()
{
   int a;
   int *p;
   int **pp;
   
   
   a=455;
   
   p=&a;
   
   pp=&p;
   
   
   printf("\nValue is: %d",a);
   printf("\nValue is: %d",*p);
   printf("\nAddress of values is: %x",p);
   printf("\nAddress of pointer is: %x",pp);
   
   
   
    return 0;
}
