#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node *newnode,*temp,*front=NULL,*rear = NULL; 

struct node* getnode()
{
    temp = (struct node*)malloc(sizeof(struct node));
    return temp;
}
int isempty()
{
    if (front == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void enqueue(int element)
{
    newnode = getnode();
    if (newnode != NULL)
    {
        if(rear == NULL)
        {
            front = newnode;
        }
        else if (rear != NULL)
        {
            rear->next = newnode;
        }
        newnode->data = element;
        newnode-> next = NULL;
        rear = newnode;
    }
    else
    {
        printf("No  node created..");
    }
}
int dequeue()
{
    int element;
    temp = front;
    element = temp->data;
    if(front == rear)
    {
        front = rear = NULL;
    } 
    front = temp->next;
    free(temp);
    return element; 
}
void display()
{
    printf("\n\t Queue = ");
    temp = front;
    do
    {
        printf(" | %d |",temp->data);
        temp = temp->next;
    } while (temp!=NULL);
    
}
int main()
{

int ch,element;
    int pos;
    do
    {
        printf("\n\n\t 1.Insert");
		printf("\n\t 2.Delete");
		printf("\n\t 3.Display");
		printf("\n\t 0.Exit");

		printf("\n\n\t Select Your Choice : ");
		scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n\tEnter The Value to be insert : ");
            scanf("%d",&element);
            enqueue(element);
            printf("\n\tValue Inserted Successfully in Queue..");
            break;
            case 2:
                if (isempty())
                {
                    printf("Queue is Empty......");
                }
                else
                {   
                     element= dequeue();
                    printf("\n\t %d is Removed Successfully from Queue..",element);
                }
                
                
            break;
            case 3:if (isempty())
                {
                    printf("Queue is Empty......");
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
