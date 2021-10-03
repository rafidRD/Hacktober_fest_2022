#include <stdio.h>

int main()
{
    int a,b,*p,*q,temp;
    
  printf("Enter two values");
  scanf("%d %d",&a,&b);
  printf("The values before swapping :a=%d b=%d",a,b);

  p=&a;
  q=&b;
  
  temp=*p;
  *p=*q;
  *q=temp;
  
  
  printf("\nThe value after swapping :a=%d  b=%d",a,b);
  
    return 0;
}
