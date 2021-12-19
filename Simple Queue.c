#include<stdio.h>
int front = 0,rear = 0;
int queue[5];

int isempty()
{
    if(front == -1 )
    {
        return 0;
    }
    else{
        return 1;
    }
}
int isfull()
{
    if(rear >= 5)
    {
        return 0;
    }else{
        return 1;
    }
}


void insert(int element)
{
    if(isfull() == 0)
    {
        printf("\n\t Queue is Full...");
    }else
    {
        queue[rear++] = element; 
    }
}
int delete()
{
    if(isempty() == 0)
    {
        return 0;
    }else{
        front++;
        if(front == rear)
        {
            rear = front = 0; 
        }
        printf("Value Deleted form Queue successfully..");
    }
}
void display()
{
    if(isempty() == 0)
    {
        printf("\n\t Queue is Empty...");
    }else{
        for (int i = front; i <rear; i++)
        {
            printf("\n\tQueue[%d] = %d",i,queue[i]);
            if(i==front){
            printf("\t<--Front");
            }
            if(i==(rear-1)){
            printf("\t<--Rear");
            }
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
            printf("\n\tEnter The Value to be insert : ");
            scanf("%d",&element);
            insert(element);
            printf("\n\tValue Inserted Successfully in Queue..");
            break;
            case 2:
            delete();
            break;
            case 3:
                display();
            break;
            case 0: 
                return 0;
            break;
        default:
            break;
        }
    } while (ch!=0);
    
}
