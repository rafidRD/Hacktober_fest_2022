#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int w=0,l=0,c=0;
    char ch,fname[100];
    FILE * fp;
    printf("Enter a file name");
    scanf("%s",fname);
    fp=fopen("fname","r");
    if(fp==NULL){
        printf("NO file exist");
        exit(0);
    }
    while(1){
        ch=fgetc(fp);
        if(ch==EOF){
            break;
        }
        c++;
        if(isspace(ch)){ //The C library function int isspace(char c) checks whether the passed character is white-space.
            w++;
        }
        if(ch=="\n"){
            l++;
        }
    }
    fclose(fp);
    printf("\nNumber of words:%d",w);
    printf("\nNumber of characters:%d",c);
    printf("\nNumber of lines:%d",l);
    return 0;
}
