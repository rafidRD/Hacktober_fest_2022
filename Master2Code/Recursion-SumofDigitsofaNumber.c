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
     int num;
     num=a%10;
     if(a==0)
    return 0;
    else
    s=num+sum(a/10);
    return s;
}