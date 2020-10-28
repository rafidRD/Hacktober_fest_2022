#include <stdio.h>

int main()
{
    int a[100],pos,n,c,i;
    printf("Enter number of elements");
    scanf("%d",&c);
    
    for(i=0;i<c;i++){
        scanf("%d",&a[i]);
    }
    

    printf("Enter Position");
    scanf("%d",&pos);
    
    for(i=pos-1;i<c;i++){
        a[i]=a[i+1];
        
    }
    
    
    printf("Resultant array:");
    for(i=0;i<c-1;i++){
        printf("%d",a[i]);
        
    }
    
    return 0;
}
