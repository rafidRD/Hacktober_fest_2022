#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n;
    char a[100][100],temp[100];
    printf("Enter number of strings");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s",a[i]);
    printf("Entered strings are:");
    for(i=0;i<n;i++)
    printf("\n%s",a[i]);
    printf("\nOrdered strings are:");
    for(i=0;i<n-1;i++){
        for(j=1+i;j<=n-1;j++){
            if(strcmp(a[i],a[j])>0){
               strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
                }
        }
     }
    
    for(i=0;i<n;i++)
    printf("\n%s",a[i]);
    return 0;
}
