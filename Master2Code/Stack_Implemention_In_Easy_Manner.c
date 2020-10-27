//Stack Operation using Array
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack[MAX];
int top = -1;
int main()
{
	int ch;
	void push();
	void pop();
	void traverse();
	void peep();
	printf("Stack Application  \n");
	
	do
	{
		printf("\n1.PUSH\n");
		printf("2.POP\n");
		printf("3.TRAVERSE\n");
		printf("4.PEEP\n");
		printf("5.EXIT\n");
		printf("Enter your choice between 1 to 5:- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:traverse();break;
			case 4:peep();break;
			case 5:printf("End of Stack Applcation");break;
			default: printf("Please Enter correct Choice:-");
			}		
	}while(ch!=5);
}

void push()
{
	int item;
	if(top>MAX-1)
	printf("Stack Overflow");
	else
	{
		printf("Enter the value to PUSH : ");
		scanf("%d",&item);
		top++;
		stack[top]= item;
	}
}
void pop()
{
	int item;
	if(top < 0)
	printf("Stack is empty !!");
	else
	{
		item = stack[top];
		printf("%d is popped out:", item);
		top--;
	}
}
void traverse()
{
	int i = 0, temp;
	if(top<0)
	{
		printf("Stack is empty !!");
		return;
	}
	else
	{
		temp = top;
		printf("Stack elements: ");
		while(temp >=0)
		{
			printf("%d  ", stack[temp]);
			temp  = temp - 1;
		}
	}
}

void peep()
{
	int n;
	printf("Enter the position to Peep the Stack ");
	scanf("%d",&n);
	if(top-n+1 < 0)
	{
		printf("Not Possible ");
		return;
	}
	else
	{
		printf("%d ", stack[top-n+1]);
	}
}
