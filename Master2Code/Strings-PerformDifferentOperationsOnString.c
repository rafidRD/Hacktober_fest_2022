#include <stdio.h>
#include <string.h>
void substring(char [],char []);
void count(char [],char);
void replace(char [],char,char);

int main()
{
    int ch,string[100],substr[100];
    char ca,ca1;

while(1){ 
    printf("\n1.Check if one String is Substring of another");
    printf("\n2.Count number of occurences of characters in a string");
    printf("\n3.Replace all ocurences of character with another");
    printf("\n4.Exit");
    printf("\nChoose a option");
    scanf("%d",&ch);
    
    
  switch(ch){
      
      case 1: 
      printf("\nEnter a String");
      scanf("%s",string);
      printf("\nEnter a substring");
      scanf("%s",substr);
      substring(string,substr);
      break;
      
      case 2: 
      printf("\nEnter a String");
      scanf("%s",string);
      printf("\nEnter a character");
      scanf(" %c",&ca);
      count(string,ca);
      break;
      
      case 3:
      printf("\nEnter a String");
      scanf("%s",string);
      printf("\nEnter character to be replaced");
      scanf(" %c",&ca);
      printf("\nEnter character to replace %c in string %s",ca,string);
      scanf(" %c",&ca1);
      replace(string,ca,ca1);
      break;
      
      case 4: exit(0);
      break;
      
      default: printf("\nInvalid Entry");
  }
}
 return 0;
}
void substring(char stri[],char subs[]){
    int i=0,j=0;
    int l=strlen(subs);
    while(stri[j]!='\0'){
        if(subs[i]==stri[j]){
            i++;
            }
        j++;
        }
if(i==l)
    printf("\n%s is a substring of %s string",subs,stri);
   else
    printf("\nNot a substring");
}

void count(char stri[],char cab){
    int i=0,count=0;
    while(stri[i]!='\0'){
    if(cab==stri[i]){
        count++;
        }
    i++;    
    }
    printf("\n%c occured %d times in %s string",cab,count,stri);
}
void replace(char stri[],char cab,char cab1){
    int i=0;
    while(stri[i]!='\0'){
        if(stri[i]==cab){
            stri[i]=cab1;
        }
        i++;
    }
    printf("\nNew String is:%s",stri);
    }

