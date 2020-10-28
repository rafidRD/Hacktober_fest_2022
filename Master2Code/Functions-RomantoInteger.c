//check this out:https://www.youtube.com/watch?v=KwrAArXFF30
#include <stdio.h>
#include <string.h>
void romantointeger(char []);
int digitval(char);
int main()
{
   char a[100];
   printf("Enter a roman number");
   scanf("%s",a);
   romantointeger(a);
   return 0;
}
void romantointeger(char b[]){
    int l=strlen(b);
    int p=l-1;
    int ans=digitval(b[p]);
    for(int q=l-2;q>=0;q--){
        if(digitval(b[q])>=digitval(b[p])){
            ans=ans+digitval(b[q]);
            p--;
        }
        else if(digitval(b[q])<digitval(b[p])){
            ans=ans-digitval(b[q]);
            p--;
        }
    }
    printf("Integer Value: %d",ans);
}

int digitval(char c){
    
    switch(c){
        
        case 'I':
        return 1;
        break;
        case 'V':
        return 5;
        break;
        case 'X':
        return 10;
        break;
        case 'L':
        return 50;
        break;
        case 'C':
        return 100;
        break;
        case 'D':
        return 500;
        break;
        case 'M':
        return 1000;
        break;
        default: printf("\nInvalid Entry");
        }
}    
        
        
        
        
        
        
        
        
        
        
    
    
    
    
