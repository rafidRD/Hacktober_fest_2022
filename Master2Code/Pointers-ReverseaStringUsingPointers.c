#include <stdio.h>

int main()
{
    int i=-1,n;
    char *p,*q;
    char a[100],b[100];
    scanf("%s",a);
    printf("The string is:");
    puts(a);
    p=a;
    q=b;
   while(*p!='\0'){
       
       p++;
       i++;
   }
   
   while(i>=0){
    p--;
    *q=*p;
     q++;
     i--;
       }
    *q='\0';
       
    printf("Reversed String is: ");
    puts(b);
        
    
    

    return 0;
}

