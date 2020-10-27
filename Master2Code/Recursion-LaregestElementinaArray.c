#include <stdio.h>
int lar(int []);
int n;
int main()
{
   int a[100],la,i,s;
   printf("Enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEntered array is:");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    s=lar(a);
    printf("\nLargest element:%d ",s);
    return 0;
}
int lar(int b[]){
    
    static int i=0,la=-9999;
    
    if(i<n){
        
        if(la<b[i]){
            la=b[i];
        }
        i++;
        lar(b);
    }
    
    return la;
    }
    