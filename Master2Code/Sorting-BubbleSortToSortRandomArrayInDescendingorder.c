#include <stdio.h>

int main()
{
    int i,n,a[100],j,temp;
    printf("Enter number of elements");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        a[i]=rand()%100;
        }
        
    printf("\nThe random array is:");
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
  printf("\nThe Sorted array is:");
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
return 0;
}
