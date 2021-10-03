#include <stdio.h>
void min(int []);
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
    min(a);
    return 0;
}
void min(int b[]){
    int i=1;
    int min=b[0];
    while(i<n){
        if(min>b[i]){
            min=b[i];
        }
    i++;
        }
        printf("\nMinimum value: %d",min);
}