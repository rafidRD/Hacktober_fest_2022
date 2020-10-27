#include <stdio.h>

int main()
{
    int n,sum=0,i;
    printf("Enter a number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        
        sum=sum+i;
        
    }
printf("%d",sum);
    return 0;
}