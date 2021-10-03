#include <stdio.h>

int main()
{
    int i,flag=0;
    char n[10];
    printf("Enter a number");
    scanf("%s",&n);
    
    while(n[i]!='\0'){
        
        if(n[i]=='.'){
            flag=1;
            break;
            
        }
       i++;
        }
if(flag==1){
printf("The number is float");
}
else{
printf("The input is integer");
}   
   
        

    
    

         


    return 0;
}
