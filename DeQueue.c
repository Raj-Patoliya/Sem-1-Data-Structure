#include<stdio.h>
int dequeue[5]= {0};
int rear = -1;
int front = -1;
int isfull()
{
	if(((front == 0) && (rear == 4)) || (front == rear+1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(front == -1)
	{
		return 1;
	}
	else
	{
		return 0; 
	}
}
void rearInsert(int element)
{
	if(front == -1)
	{
		front = 0;
		rear = 0; 
	}
	else if(rear == 4)
	{	
		rear = 0;
	}
	else
	{
		rear = rear + 1;	
	}
	dequeue[rear] = element;
}
void frontInsert(int element)
{
	if(front == -1)
	{
		front = 0;
		rear = 0;	
	}	
	else if(front == 0)
	{
		front = 4;
	}
	else
	{
		front--;	
	}
	dequeue[front] = element;
}
int rearpop()
{
	int element;
	element = dequeue[rear];
	dequeue[rear] = 0;
	if(front == rear)
	{
		front = rear = -1;
	}
	else if(rear == 0)
	{
		rear  = 4;
	}
	else
	{
		rear--;	
	}
	return element;
}
int frontpop()
{
	int element;
	element = dequeue[front];
	dequeue[front] = 0;
	if(front == rear)
	{
		front = rear = -1;	
	}
	else if( front == 4)
	{
		front =0;
	}
	else
	{
		front = front + 1;	
	}
	return element;
}
void display()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("| %d |",dequeue[i]);
	}
}	
int main()
{
	int ch,element;
    	int pos;
    	    do
	    {
			printf("\n\n\t 1.Insert form Rear");
			printf("\n\n\t 2.Delete form Rear");
			printf("\n\n\t 3.Insert form Front");
			printf("\n\n\t 4.Delete form Front");
			printf("\n\n\t 5.Display");
			printf("\n\t 0.Exit");

			printf("\n\n\t Select Your Choice : ");
			scanf("%d",&ch);
		switch (ch)
		{
		    case 1:
		   		if(isfull() == 1)
				{
					printf("\n\t DeQueue is Full....");
				}
				else
				{
					printf("\n\t Enter The element to Insert.. : ");
					scanf("%d",&element);
					rearInsert(element);
				}	
		    break;
		    case 2:
		   		if(isempty() == 1)
				{
					printf("\n\t Dequeue is Empty..");
				}
				else
				{
					element = rearpop();
					printf("\n\t %d is Removed form Dequeue...",element);
				}
		    break;
		    case 3:
     				if(isfull() == 1)
				{
					printf("\n\t DeQueue is Full....");
				}
				else
				{
					printf("\n\t Enter The element to Insert.. : ");
					scanf("%d",&element);
					frontInsert(element);
				}
		    break;
		    case 4:
     				if(isempty() == 1)
				{
					printf("\n\t Dequeue is Empty..");
				}
				else
				{
					element = frontpop();
					printf("\n\t %d is Removed form Dequeue...",element);
				}
		    break;
		    case 5:
     				if(isempty() == 1)
				{
					printf("\n\t Dequeue is Empty..");
				}
				else
				{
					display();
				}
		    break;
		    case 0: 
		        return 0;
		    break;
		default:
		    break;
		}
	    } while (ch!=0);
}
