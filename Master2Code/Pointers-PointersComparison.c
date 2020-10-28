#include <stdio.h>

int main()
{
 //int *ptrA;
 //int *ptrB;
   
 //ptrA=(int *)1;
 //ptrB=(int *)1;
   
 //if(ptrB>ptrA){
   //  printf("ptrB is greater than ptrA");
 //}
//else
 //printf("they are same");
   
   
   
   int *ptrA;
    float *ptrB;
    
    ptrA = (int *)1000;
    ptrB = (float *)2000;
    
    if(ptrB > ptrA)
       printf("PtrB is greater than ptrA");
    else
    printf("They are the same");
   
    return 0;
}