#include <stdio.h>
int powe(int,int);
int main()
{
int n,pow,res;
printf("Enter a number and power");
scanf("%d %d",&n,&pow);
res=powe(n,pow);
printf("Result: %d",res);

    return 0;
}
int powe(int a ,int b){
    int res;
    if(b==0){
      return 1;
  }
  else
{
    res=a*powe(a,b-1);
    return res;
}}