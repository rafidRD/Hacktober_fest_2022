#include <stdio.h>
int lcm(int,int);
int main()
{
int a,b,res;
printf("Enter Two Numbers");
scanf("%d %d",&a,&b);
res=lcm(a,b);
printf("LCM: %d",res);
    return 0;
}
int lcm(int x,int y){
    static int i=1;
    if(i%x==0 &&  i%y==0){
        return i;
    }
    i++;
    lcm(x,y);
}