//checkout mycodeschool
#include <stdio.h>

int main()
{
    int n,a[100],i,hole,j,value;
    printf("Enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a[i]=rand()%100;
        }
        
    printf("\nOriginal array is:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=1;i<n;i++){
        value=a[i];
        hole=i;
        while(a[hole]<a[hole-1] && hole>0){
            a[hole]=a[hole-1];
            a[hole-1]=value;
            hole=hole-1;
        }
    }
    printf("\nSorted array is:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}