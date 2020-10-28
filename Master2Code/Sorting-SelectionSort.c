//checkout mycodeschool
#include <stdio.h>

int main()
{
    int n,a[100],i,min,pos,j;
    printf("Enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a[i]=rand()%100;
        }
        
    printf("\nOriginal array is:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n-1;i++){
       min=a[0+i];
        for(j=1+i;j<n;j++){
            if(min>a[j]){
                min=a[j];
                pos=j;
            }
        }
    a[pos]=a[i];
    a[i]=min;
    }
    printf("\nSorted array is:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
