#include <stdio.h>
#include <math.h>
int p;
void arm(int);
int main()
{
   int n;
   printf("Enter a number");
   scanf("%d",&n);
   p=n;
   arm(n);
   return 0;
}

void arm(int a){
    int count=0,res=0,num,temp;
    temp=a;
    while(temp!=0){
        count++;
        temp=temp/10;
    }
    
    while(a!=0){
        num=a%10;
        res=res+pow(num,count);
        a=a/10;
    }
    
    if(p==res)
    printf("%d is a armstrong number",p);
    else
    printf("Not a armstrong number");
}
    
    