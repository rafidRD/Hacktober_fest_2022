#include <stdio.h>

int main()
{
    int a[100][100],r,c,i,j,count=0,digit=0;
    printf("Enter number of rows and column");
    scanf("%d %d",&r,&c);
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
    }
    
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]==0){
                count++;
            }
           else if(a[i][j]!=0){
               
               digit++;
    }
             }}
        if(count>digit)
        printf("The matrix is Sparse Matrix");
        else
        printf("The Matrix is not a Sparse Matrix");
    
    return 0;
}
