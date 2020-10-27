#include <stdio.h>

int main()
{
    int a[100],pos,n,c,i;
    printf("Enter number of elements");
    scanf("%d",&c);
    
    for(i=0;i<c;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter value");
    scanf("%d",&n);
    printf("Enter Position");
    scanf("%d",&pos);
    
    for(i=c-1;i>=pos-1;i--){
        a[i+1]=a[i];
        
    }
    a[pos-1]=n;
    
    printf("Resultant array:");
    for(i=0;i<=c;i++){
        printf("%d",a[i]);
        
    }
    
    return 0;
}