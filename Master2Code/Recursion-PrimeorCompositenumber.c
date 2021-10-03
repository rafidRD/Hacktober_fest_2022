#include <stdio.h>
int prime(int);
int main()
{
    int n,res;
    printf("Enter a number");
    scanf("%d",&n);
    res=prime(n);
    if(res==1){
        printf("%d is a composite number",n);
    }
   else
   printf("%d is a prime number",n);

    return 0;
}
int prime(int a){
    static int i=2; 
    if(i<=a/2){
    if(a%i==0){
        return 1;
    }
    i++;
    prime(a);
        }
   return 0;
    }