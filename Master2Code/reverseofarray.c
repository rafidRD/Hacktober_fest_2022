#include <stdio.h>

int main()
{
   int a[100],n,b[100],i,j,k;
   printf("Enter number of elements");
   scanf("%d",&n);
    
    printf("Enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    for(j=0;j<n;j++){
        b[j]=a[n-1-j];
    }
        
    printf("Reverse array:");
    for(k=0;k<n;k++){
    printf("%d",b[k]);
    }
     return 0;
}
