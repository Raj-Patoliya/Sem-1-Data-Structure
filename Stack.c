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
void peep()
{
	for(int x = 5;x>top;x--)
	{
		printf("\n\t|    |");
		printf("\n\t|____|");
		if(x == top-1)
		{
			printf("<--top");		
		}
	}			
	for(int i=top;i>=0;i--)
	{
		printf("\n\t| %d |",stack[i]);	
		if(i == top)
		{
			printf("<--top");		
		}
		printf("\n\t|____|");		
	}
}
int pop()
{
	top = top-1;	
	return 1;
}

int updatation(int update,int value)
{
	stack[update] = value;
	return 1;
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
	int ch,sum,data,update,value;
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
				printf("%d",top);
				if(sum == 1)
				{
					printf("\n\t Stack is overflowed ");
					break;
				}
				else
				{	
					printf("\n\t Enter The Data : ");
					scanf("%d",&data);

					if(push(data) == 1)
					{
						printf("\n\t Data inserted Successfully");
						printf("Stack[%d] = %d ",top,stack[top]);
					}
					
				}
				break;
			case 2:
				if(isEmpty() == 0)
				{
					peep();
		
				}
				else
				{
					for(int i=0;i<(5-top);i++)
					{
						printf("\n\t|-----|");
						if(i == 5)
						{
							printf("<--top");		
						}
				
					}	
					printf("\n\t Stack is Empty");
					break;
				}
				break;

			case 3:
				if(isEmpty() == 0)
				{
					int sum = pop();
					if(sum == 1)
					{
						printf("\n\t Data Deleted Successfully");	
					}		
				}
				else
				{
					printf("\n\t Stack is Empty");
					break;
				}
			break;
			case 4:
				
				printf("\n\tEnter The stack position to update : ");
				scanf("%d",&update);
				if(update > top || update < -1)
				{
					printf("\n\t Please Enter Proper Index");
				}
				else
				{
					printf("\n\tEnter The Value For Updation : ");
					scanf("%d",&value);
					int up = updatation(update,value);
					if(up == 1)
					{
						printf("\n\tStack Updated Successfully");
					}
					else
					{
						printf("\n\tSomething Went wrong");	
					}
				}
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
