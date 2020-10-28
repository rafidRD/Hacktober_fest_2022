#include <stdio.h>
void max(int []);
int n;
int main()
{
    int a[100],i;
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("\nEnter %d elements",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    max(a);
    return 0;
}
void max(int b[]){
    int i=1;
    int max=b[0];
    while(i<n){
        if(max<b[i]){
            max=b[i];
        }
    i++;
        }
        printf("\nMaximum value: %d",max);
}