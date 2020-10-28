#include <stdio.h>
int pali(int);
int n;
int main()
{
   int rev;
   printf("Enter a number");
   scanf("%d",&n);
   rev=pali(n);
   if(rev==1)
   printf("%d is a palindrome",n);
   else if(rev==0)
   printf("Not a palindrome");
   return 0;
}
int pali(int a){
     static int rev=0;
     int num;
    if(a!=0){
     num=a%10;
     rev=rev*10+num;
    pali(a/10);
        }
     else if(rev==n)
     return 1;
     else
     return 0;
}