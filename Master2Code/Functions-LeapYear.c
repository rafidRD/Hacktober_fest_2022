#include <stdio.h>
void leap(int);
int main()
{
    int n;
    printf("Enter a year");
    scanf("%d",&n);
    leap(n);
    return 0;
}
void leap(int a){
    int flag=0;
    if(((a%4==0)&&(a%100!=0))||(a%400==0)){
        flag=1;
        }
    if(flag==1)
    printf("%d is a leap year",a);
    else
    printf("Not a leap year");
    }