#include <stdio.h>

int main()
{
   int a[100],c,i,sum=0;
    printf("Enter number of elements");
    scanf("%d",&c);
    
    for(i=0;i<c;i++){
        scanf("%d",&a[i]);
    }
    
   
   for(i=0;i<c;i++){
       sum=sum+a[i];
        }
   
  printf("Sum of element:%d\n",sum);
   
   
   
   
    return 0;
}
