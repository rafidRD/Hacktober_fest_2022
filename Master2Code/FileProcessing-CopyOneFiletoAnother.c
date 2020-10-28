#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    char ch,fname[100];
    FILE *fp,*ft;
    printf("\nEnter the file to be open:");
    scanf("%s",fname);
    fp=fopen("fname","r");
    if(fp==NULL){
        printf("\nThe file does not exist");
        exit(0);
        
    }
    printf("\nEnter the file to be copied to:");
    scanf("%s",fname);
    ft=fopen("fname","w");
    if(ft==NULL){
        printf("\nThe file does not exist");
        exit(0);
        
    }
    while(1){
        ch=fgetc(fp);
        if(ch==EOF){
            break;
        }
       else{
        if(isupper(ch)){
            ch=tolower(ch);
        }
        if(islower(ch)){
            ch=toupper(ch);
        }
       fputc(ch,ft); 
    }
        
    }
     fclose(fp);
     fclose(ft);
    
    return 0;
}
