#include <stdio.h>
#include <string.h>
#define lar(x,y) x>y?1:0 
int main()
{
    
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    if(lar(a,b))
        printf("%d is largest",a);
        else
        printf("%d is largest",b);
    
    return 0;
}
