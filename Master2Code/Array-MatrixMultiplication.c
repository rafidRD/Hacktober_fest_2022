#include <stdio.h>

int main()
{
    int a[100][100],i,j,r,c,p,q,b[100][100],d[100][100],k,sum=0;
    
    
    printf("Enter number of rows and column for first matrix");
    scanf("%d %d",&r,&c);
    
    
    printf("Enter first matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter number of rows and column for second matrix");
    scanf("%d %d",&p,&q);
    
    if(c!=p){
        printf("The given matrix can't be multiplied");
    }
    else{
     printf("Enter second matrix");
     for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
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
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d\t",b[i][j]);
        }
     printf("\n");
        }
    
    for(i=0;i<r;i++){
        for(k=0;k<q;k++){
        for(j=0;j<c;j++){
            
            sum=sum+a[i][j]*b[j][k];
         
        }
        d[i][k]=sum;
        sum=0;
            
        }
    }
    
        
      printf("Multipliaction of Matrices\n");
    for(i=0;i<r;i++){
        for(j=0;j<q;j++){
            printf("%d\t",d[i][j]);
        }
    
        printf("\n");
        
    }
     
     
    
    return 0;
}
