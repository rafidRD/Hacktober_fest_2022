#include <stdio.h>
int sum(int);
int main()
{
   int n,res;
   printf("Enter a number");
   scanf("%d",&n);
   res=sum(n);
   printf("Sum: %d",res);
   return 0;
}
int sum(int a){
     int s;
    if(a==0)
    return 0;
    else
    s=a+sum(a-1);
    return s;
}