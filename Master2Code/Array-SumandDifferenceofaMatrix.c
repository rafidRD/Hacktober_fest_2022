#include <stdio.h>

int main()
{
    int a[100][100],i,j,r,c,trace,normal,b[100][100],e[100][100],d[100][100];
    
    
    printf("Enter number of rows and column");
    scanf("%d %d",&r,&c);
    
    
    printf("Enter first matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter second matrix");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
     printf("First matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
    
        printf("\n");
        
    }
    
    printf("Second matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",b[i][j]);
        }
     printf("\n");
        }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            e[i][j]=a[i][j]+b[i][j];
        }
        }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            d[i][j]=a[i][j]-b[i][j];
        }
        }
        
      printf("Sum of matrices\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",e[i][j]);
        }
    
        printf("\n");
        
    }
     
      printf("Difference of matrices\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",d[i][j]);
        }
    
        printf("\n");
        
    }
    
    return 0;
}
