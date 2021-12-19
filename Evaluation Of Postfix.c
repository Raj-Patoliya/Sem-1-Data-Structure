#include<stdio.h>
#include<ctype.h>
#include<String.h>
int top =-1;
int stack[25] = {'0'};
int ch;
void push(int element)
{
	if(top == 24)
	{
		printf("\n\t Stack is Full");
	}
	else{
		top++;
		stack[top] = element;
	}
}
int pop()
{
	if(top == -1)
	{
		printf("\n\t Stack is empty");
	}
	else{
		ch = stack[top];
		top--;
	}
	return ch;
}	
void display()
{
	for(int i=0;i<=top;i++)
	{
		printf("\n\t %d",stack[i]);
	}
}

void main()
{
	char postfix[20] ={'\0'},element;
	int num2,num1,ans=0, i=0;
	printf("\n\t Enter the Postfix Expresson : ");
	scanf("%s",postfix);
	
	while(i <= strlen(postfix)-1)
	{	
		element = postfix[i];
		if(isdigit(element))
		{
			push(element-'0');
		}
		else
		{
			num1 = pop();
			num2= pop();
			switch(element)
			{
			case '+':
					ans = num2 + num1;
                    push(ans);
				break;
			case '-':
					ans = num2 - num1;
                    push(ans);
				break;
			case '*':
					ans = num2 * num1;
                    push(ans);
				break;
			case '/':
					ans = num2 / num1;
                    push(ans);
				break;
			}
		}
		i++;
	}
	printf("\n\t answer of your postfix Expression : %d",ans);
}
