#include <stdio.h>
void rev(char *);
int main()
{
    char a[100];
    printf("Enter a string");
    gets(a);
    printf("The original string is: ");
    puts(a);
    printf("The reverse string is: ");
    rev(a);
    return 0;
}
void rev(char *c){
   if(*c){
       rev(c+1);  //pointr arithmetic concept{(p++) or (p+i) or (p+1)}
       printf("%c",*c);
       
   }
}