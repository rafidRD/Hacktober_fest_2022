#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],c;
    int len,i=0,flag=0;
    printf("Enter a string");
    gets(a);
    printf("Enter a character");
    scanf("%c",&c);
    len=strlen(a);
    while(i<len){
        if(c==a[i]){
            flag=1;
            break;
        }
        i++;
    }

if(flag==1)
    printf("The characer is present in the string at %d position",i+1);
    else
    printf("The character is absent");
    return 0;
}
