
#include <stdio.h>
void power(int,int);
int main()
{
    int n,p;
    printf("Enter a number and power");
    scanf("%d %d",&n,&p);
    power(n,p);
    return 0;
}
void power(int a,int b){
    int i=0,p=1;
    while(i<b){
        p=p*a;
        i++;
        }
        printf("Result: %d",p);
}