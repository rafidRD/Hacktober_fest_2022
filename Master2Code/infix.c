#include<stdio.h>
#include<string.h>
int top=-1,i=0;
char infix[50],stack[50];
int precedense(char ch)
{
if(ch=='+'||ch=='-')
return 1;
else if(ch=='*'||ch=='/')
return 2;
else if(ch=='^')
return 3;
}
void push(char ch)
{
++top;
stack[top]=ch;
}
void pop()
{
printf("%c",stack[top]);
--top;
}
int main()
{
printf("enter the infix expression\n");
scanf("%s",infix);
int length=strlen(infix);
infix[length+1]=')';
for(int i=length;i>0;--i)
infix[i]=infix[i-1];
infix[0]='(';
i=0;
while(infix[i]!='\0')
{
if((infix[i]>='a'&&infix[i]<='z')||(infix[i]>='A'&&infix[i]<='Z'))
printf("%c",infix[i]);
else if(infix[i]=='(')
push('(');
else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||
infix[i]=='^')
{
while(stack[top]!='(' && (precedense(stack[top])>=precedense(infix[i])))
pop();
push(infix[i]);
}
else if(infix[i]==')')
{
while(stack[top]!='(')
pop();
--top;
}
++i;
}
}
