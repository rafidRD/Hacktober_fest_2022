#include <stdio.h>

int main()
{
    int a[2][2],i,j,det;
    
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix is: ");
     for(i=0;i<2;i++){
         printf("\n");
        for(j=0;j<2;j++){
            printf("%d\t",a[i][j]);
        }}
        printf("\n\n");
        det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
        
        printf("Determinanat is:%d",det);
    
    return 0;
}
