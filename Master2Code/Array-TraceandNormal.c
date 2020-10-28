#include <stdio.h>

int main()
{
    int a[100][100],i,j,n,trace=0,normal=0;
    printf("Eneter number of columns or rows");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            normal+=a[i][j]*a[i][j];
            
            }
        }
        
        for(i=0;i<n;i++){
            trace+=a[i][i];
        }
        
        
        printf("Trace of the matrix is:%d",trace);
        printf("\n");
        printf("Normal:%d",normal);
    
    return 0;
}
