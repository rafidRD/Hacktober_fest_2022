#include <stdio.h>

int main()
{
    
  int fun(int a,int b){
      printf("\na is: %d",a);
      printf("\nb is: %d",b);
  }

    int(*f)(int,int);//pointer to function
    f=fun;
    
    fun(2,3);
    f(2,3);
    


    return 0;
}
