#include <stdio.h>
void fib(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    fib(n);
    return 0;
}
void fib(int a){
        static int first=0;    //Static int does not lose its value till the program get fully executed.
        static int second=1;   //Static variable will not get destroyed after function ends.
        static int sum;
    if(a>=1){
       printf("%d\t",first);
        sum=first+second;
        first=second;
        second=sum;
        fib(a-1);
        
    }
    
}