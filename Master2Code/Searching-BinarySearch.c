#include <stdio.h>

int main()
{
    int n,b,a[100],flag=0,i,beg=0,end,mid,pos;
    printf("Enter number of elements");
    scanf("%d",&n);
    end=n;
    printf("Enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    printf("Enter a element to search");
    scanf("%d",&b);
    while(beg<=end){
        mid=(beg+end)/2;
        if(a[mid]==b){
            flag=1;
            pos=mid;
            break;
        }
        if(b>a[mid]){
            beg=mid+1;
        }
        if(b<a[mid]){
            end=mid-1;
        }
        
    }
    if(flag==1)
    printf("%d found at position %d ",b,pos+1);
    else
    printf("Element not found");
    return 0;
}
