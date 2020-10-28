#include <stdio.h>

int main()
{
   int a[100],c,i,lar,sml;
    printf("Enter number of elements");
    scanf("%d",&c);
    
    for(i=0;i<c;i++){
        scanf("%d",&a[i]);
    }
    lar=a[0];
    for(i=1;i<c;i++){
        if(lar<a[i])
         lar=a[i];
    }
   sml=a[0];
   for(i=1;i<c;i++){
       if(sml>a[i])
       sml=a[i];
   }
   printf("largest element:%d\n",lar);
   printf("smallest element:%d",sml);
   
   
   
    return 0;
}
