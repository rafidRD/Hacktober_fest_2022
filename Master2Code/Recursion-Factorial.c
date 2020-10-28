#include <stdio.h>
int fac(int);
int main()
{
    int a,res;
    
    printf("Enter a number");
    scanf("%d",&a);
    res=fac(a);
    printf("Factorial:%d",res);
    return 0;
}
int fac(int n){
    int res;
    if(n==0)
    return 1;
    else
    res=n*fac(n-1);
    return res;
    
}