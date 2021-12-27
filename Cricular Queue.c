#include<stdio.h>
int front = -1,rear = -1;
int queue[5];

int isempty()
{
	if((front == -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isfull()
{
	if( ((front == 0) && (rear == 4)) || (rear+1) ==front)
	{
		return 1;
	}
	else
	{
		return 0;	
	}	
}


void insert(int element)
{
	if(front == -1)
	{
		front =0;
		rear = 0;
	}
	else if( rear == 4)
	{
		rear = 0;
	}
	else
	{
		rear++;	
	}
	queue[rear] = element;
}
int delete()
{
	int element;
	element = queue[front];
	if(front ==  rear)
	{
		front = -1;
		rear = -1;
	}
	else if(front == 4)
	{
		front == 0;
	}
	else
	{
		front++;
	}
	return element;
}
void display()
{
	
	if(front < rear)
	{
		for(int i = front;i<=rear;i++)
		{
			printf("| %d |",queue[i]);
		}
	}
	else
	{
		for(int i = front;i<=4;i++)
		{
			printf("| %d |",queue[i]);
		}
		for(int i = 0;i<=rear;i++)
		{
			printf("| %d |",queue[i]);
		}
	}
}

int main()
{
    int ch,element;
    int pos;
    do
    {
		printf("\n\n\t 1.Insert");
		printf("\n\t 2.Delete");
		printf("\n\t 2.Display");
		printf("\n\t 0.Exit");

		printf("\n\n\t Select Your Choice : ");
		scanf("%d",&ch);
        switch (ch)
        {
        case 1:
           	if(isfull() == 1)
		{
			printf("\n\tQueue is Full.....");
		}
		else
		{
			printf("\n\tEnter The Value to be insert : ");
            		scanf("%d",&element);
			insert(element);
            		printf("\n\tValue Inserted Successfully in Queue..");	
		}
            break;
            case 2:
           		if(isempty() == 1)
			{
				printf("Queue is Empty...");
			}
			else
			{
				int element = delete();
				printf("\n\t %d is removed from queue.. ",element);
			}
            break;
            case 3:
                	if(isempty() == 1)
			{
				printf("Queue is Empty...");
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
 
