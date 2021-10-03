#include <stdio.h>

int main()
{
    int a[100][100],i,j,r,c,flag=0;
    printf("Enter rows and column");
    scanf("%d %d",&r,&c);
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=a[j][i]){
                flag=1;
                break;
            }
        }}
        
        if(flag==1)
        printf("The matrix is not Symetric");
        else
        printf("The matrix is symetric");
    
    return 0;
}
