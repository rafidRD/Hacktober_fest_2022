#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],len,i=0,flag=0;
    printf("Enter a string");
    scanf("%s",a);
    len=strlen(a);
    while(i<len/2){
        if(a[i]!=a[len-1-i]){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    printf("The string is palindrome: %s",a);
    else
    printf("The string is not a palindrome:%s",a);
    return 0;
}
