void Strcat(char [],char []);
void Strcmp(char [],char []);
void Strrev(char []);
void Strupr(char []);
void Strlwr(char []);
void Strcpy(char [],char []);
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    char a[100],b[100];
    while(1){
        
        printf("\n1.Strcat");
        printf("\n2.Strcmp");
        printf("\n3.Strrev");
        printf("\n4.Strupr");
        printf("\n5.Strlwr");
        printf("\n6.Strcpy");
        printf("\n7.Exit");
        
        printf("\nEnter a choice");
        scanf("%d",&n);
        
        switch(n){
            case 1:
            printf("\nEnter first string");
            scanf("%s",a);
            printf("\nEnter second string");
            scanf("%s",b);
            Strcat(a,b);
            break;
            
            case 2:
            printf("\nEnter first string");
            scanf("%s",a);
            printf("\nEnter second string");
            scanf("%s",b);
            Strcmp(a,b);
            break;
            
            case 3:
            printf("\nEnter first string");
            scanf("%s",a);
            Strrev(a);
            break;
            
            case 4:
             printf("\nEnter first string");
            scanf("%s",a);
            Strupr(a);
            break;
            
            case 5:
             printf("\nEnter first string");
            scanf("%s",a);
            Strlwr(a);
            break;
            
            case 6:
             printf("\nEnter first string");
            scanf("%s",a);
            printf("\nEnter second string");
            scanf("%s",b);
            Strcpy(a,b);
            break;
            
            case 7: exit(0);
            break;
            
            default:
            printf("\nInvalid Entry");
        }
    }
   return 0;
}

void Strcat(char a[],char b[]){
    int i=0,j=0;
    while(a[i]!='\0'){
        i++;
    }
    while(b[j]!='\0'){
        a[i]=b[j];
        j++;
        i++;
    }
    a[i]='\0';
    printf("\nNew string :%s",a);
}    
void Strcmp(char a[],char b[]){ 
 int i=0,flag=0;
 while(a[i]!='\0'){
   if(a[i]!=b[i]){
       flag=1;
       break;
       }
    i++;
    }
 if(flag==1)
     printf("\nString are not equal");
     else
     printf("\nStrings are equal");
 }
void Strrev(char a[]){
    char b[100],i=0,j=0;
   while(a[i]!='\0'){
        i++;
   }
    while(a[j]!='\0'){
        b[j]=a[i-1-j];
        j++;
        }
    printf("\nReverse String: %s",b);
}
void Strupr(char a[]){
    int ca,i=0;
while(a[i]!='\0'){
    ca=a[i];
    if(ca>96 && ca<123){
        a[i]=a[i]-32;
    i++;
    }
   } 
    printf("\nNew String: %s",a);
}
void Strlwr(char a[]){
    int ca,i=0;
while(a[i]!='\0'){
    ca=a[i];
    if(ca>64 && ca<91){
        a[i]=a[i]+32;
    }
    i++;
}
    printf("\nNew String: %s",a);
    }    
void Strcpy(char a[],char b[]){
    int i=0;
    while(b[i]!='\0'){
        a[i]=b[i];
        i++;
    }
    printf("\nNew String: %s",a);    
}    
    
