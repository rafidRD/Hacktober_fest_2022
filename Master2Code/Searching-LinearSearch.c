#include <stdio.h>

int main()
{
    int n,b,a[100],flag=0,i;
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    printf("Enter a element to search");
    scanf("%d",&b);
    
    for(i=0;i<n;i++){
        if(a[i]==b){
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("%d found at position %d ",b,i+1);
    else
    printf("Element not found");
    return 0;
}
