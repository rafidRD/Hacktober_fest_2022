#include <stdio.h>

int main()
{
     int *p,i,n;
    int a[100];
    printf("Enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    p=a;
   
    printf("\nEntered elements are: ");
    for(i=0;i<n;i++){
        printf("\nAddress of a[%d] is:%x ",i,p);
        printf("\nValue of a[%d] is:%d ",i,*p);
        p++;//by pinter arithmetic
        
    }
    return 0;
}