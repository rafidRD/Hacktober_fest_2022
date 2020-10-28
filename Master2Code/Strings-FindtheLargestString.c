#include <stdio.h>
#include <string.h>
int main()
{
    char a[100][100];
    int len,i=0,n,max,c;
    printf("Enter number of Strings");
    scanf("%d",&n);
    printf("Enter %d  strings",n);
    for(i=0;i<n;i++){
    scanf("%s",a[i]);
    }
    max=strlen(a[0]);
    printf("The %d string are:",n);
    for(i=0;i<n;i++){
    printf("\n%s",a[i]);
    }
   for(i=1;i<n;i++){
       if(max<strlen(a[i])){
           max=strlen(a[i]);
           c=i;
           }
   }

printf("\nThe max string is:");
printf("%s",a[c]);
    return 0;
}
