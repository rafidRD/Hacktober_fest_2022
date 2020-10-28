#include <stdio.h>
#include <string.h>
#define Eqint(x,y) x==y?1:0 
int main()
{
    
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    if(Eqint(a,b))
        printf("Numbers are equal");
        else
        printf("Numbers are not equal");
    
    return 0;
}
