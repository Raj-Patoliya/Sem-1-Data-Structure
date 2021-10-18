#include<stdio.h>
int MAXSIZE = 5;       
int stack[5];     
int top = -1;
int push(int data)
{
	top=top+1;
	stack[top] = data;
	return 1;
}
void display()
{
	for(int i=0;i<top;i++)
	{
		printf("%d ",stack[i]);		
	}	
}
int isEmpty()
{
	if(top == -1)
	{	
		return 1;
	}
	else
	{
		return 0; 	
	}
}
int isOverflow()
{
	if(top == 5)
	{
		return 1;
	}
	else
	{
		return 0; 	
	}
}
int main()
{
	int ch,sum,data;
	do{
		printf("\n\n\t 1.Push");
		printf("\n\t 2.Peep");
		printf("\n\t 3.Pop");
		printf("\n\t 4.Update");
		printf("\n\t 0.Exit");

		printf("\n\n\t Select Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				sum = isOverflow();
				if(sum == 1)
				{
					printf("\n\t Stack is overflowed ");
					break;
				}
				else
				{	
					printf("\n\t Enter The Data : ");
					scanf("%d",&data);
					printf("%d",push(data));
					if(push(data) == 1)
					{
						printf("\n\t Data inserted Successfully");
					}
					
				}
				
			break;
			case 2:
				printf("\n\tPeep");
			break;
			case 3:
				printf("\n\tPop");
			break;
			case 4:
				printf("\n\tUpdate");
			break;
			case 0:
				printf("\n\tbye bye\n\n");
				return 0;
			break;
			default:
				printf("\n\tEnter Proper Choice..");
			break;
		}
	}while(ch!=0);
	return 0;
}
