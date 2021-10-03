#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,i,n;
    printf("Enter number of elements");
    scanf("%d",&n);
    
    p=(int *)malloc(n*sizeof(int));
    
    if(p==NULL)
    printf("No memory allocated");
    else{
    for(i=0;i<n;i++){
        scanf("%d",p+i);
        
    }}
    printf("Entered elements are: ");
    for(i=0;i<n;i++){
        printf("%d",*(p+i));
        
    }
    free(p);
    return 0;
}
