#include <stdio.h>

int add(int , int);
 
int main()
{
    int m,n,res;
    printf("Enter two numbers to add");
    scanf("%d %d",&m,&n);
    res=add(m,n);
    printf("Result:%d",res);
  return 0;
}
int add(int a, int b){
    int res;
    if(b==0)
     return a;
    
    else
    res=add(a,b-1)+1;
    return res;
}
    