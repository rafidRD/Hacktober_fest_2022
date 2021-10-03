//check this out:https://overiq.com/c-examples/c-program-to-convert-a-decimal-number-to-roman-numerals/
#include <stdio.h>
void integertoroman(int);
int main()
{
    int a;
    printf("Enter a Integer");
    scanf("%d",&a);
    integertoroman(a);
    return 0;
}
void integertoroman(int b){
   if(b<0)
   printf("Invalid Entry");
   else{
    while(b>0){
    if(b>=1000){
     printf("%c",'M');
     b=b-1000;
    }
    else if(b>=900){
        printf("%c%c",'C','M');
        b=b-900;
    }
   else if(b>=500){
        printf("%c",'D');
        b=b-500;
    }
   else if(b>=400){
        printf("%c%c",'C','D');
        b=b-400;
        }
   else if(b>=100){
        printf("%c",'C');
        b=b-100;
    }
   else if(b>=90){
        printf("%c%c",'X','C');
        b=b-90;
    }
   else if(b>=50){
        printf("%c",'L');
        b=b-50;
    }
    else if(b>=40){
        printf("%c%c",'X','L');
        b=b-40;
    }
   else if(b>=10){
        printf("%c",'X');
        b=b-10;
    }
     else if(b>=9){
        printf("%c%c",'I','X');
        b=b-9;
    }
   else if(b>=5){
        printf("%c",'V');
        b=b-5;
    }
   else if(b>=4){
        printf("%c%c",'I','V');
        b=b-4;
    }
   else if(b>=1){
        printf("%c",'I');
        b=b-1;
    }
   
    }
}
}