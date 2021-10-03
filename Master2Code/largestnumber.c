#include <stdio.h>

int main()
{
    int n,i,lar,a;
   
    printf("Enter  number of elements");
    scanf("%d",&n);
    
   printf("Enter %d elements",n);
   scanf("%d",&lar);
   for(i=2;i<=n;i++){
   scanf("%d",&a);
   
   if(lar<a)
    lar=a;
        
}
    
    
printf("Largest elements:%d\n",lar);
         


    return 0;
}
