#include <stdio.h>
#include <string.h>
#define Eqstring(x,y) strcmp(x,y)==0?1:0 
int main()
{
    
    char a[100],b[100];
    printf("Enter two String");
    scanf("%s %s",a,b);
    if(Eqstring(a,b))
        printf("Strings are equal");
        else
        printf("Strings are not equal");
    
    return 0;
}
