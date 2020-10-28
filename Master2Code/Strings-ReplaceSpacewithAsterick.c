#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int len,i=0;
    printf("Enter a string");
    gets(a);
    printf("The original string is:");
    puts(a);
    len=strlen(a);
    while(i<len){
        if(a[i]==' '){
            a[i]='*';
        
        }
        i++;
    }

printf("The new string is:");
puts(a);
    return 0;
}
