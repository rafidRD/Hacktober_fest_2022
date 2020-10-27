#include <stdio.h>
int hcf(int,int);
int l;
int main()
{
int a,b,res;
printf("Enter Two Numbers");
scanf("%d %d",&a,&b);
res=hcf(a,b);
printf("HCF: %d",res);
    return 0;
}
int hcf(int x,int y){
   if(x>y)
   hcf(x-y,y);
   else if(y>x)
   hcf(x,y-x);
   else
   return x;
}