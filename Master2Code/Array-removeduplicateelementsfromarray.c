#include <stdio.h>

int main()
{
   int a[100],c,i,j,k;
    printf("Enter number of elements");
    scanf("%d",&c);
    
    for(i=0;i<c;i++){
        scanf("%d",&a[i]);
    }
    
   printf("Old array: ");
   for(i=0;i<c;i++){
       printf("%d\t",a[i]);
        }
   printf("\n");
  
  for(i=0;i<c;i++){
      for(j=i+1;j<c;j++){
        
          if(a[j]==a[i]){
             
              for(k=j;k<c;k++){
                  a[k]=a[k+1];
                 }
                  c--;   
                }
                }
       }
  printf("New Array: ");
 for(i=0;i<c;i++)
  printf("%d\t",a[i]);
   
 return 0;
}
