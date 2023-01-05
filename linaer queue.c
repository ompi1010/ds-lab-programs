#include<stdio.h>
#include<stdlib.h>
#define size 5
void enqueue();
void dequeue();
void display();
int front=-1;
int rear=-1;
int queue[size];
int main()
{
	int choice;
	int x;
	while(1)
	{
		printf("\n 1.insert\n 2.delete\n 3.display\n4.exit");
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:enqueue();
		
				break;
		case 2:dequeue();
				break;
		case 3:display();
				break;
		case 4:exit(0);
				break;
		default:printf("invalid function");
		}
	}
}
void enqueue()
{
	int x;
	printf("enter the element:");
		scanf("%d",&x);
	if(front==size-1)
	{
		printf("overflow");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=x;
		printf("value inserted");
	}
	else
	{	
		rear++;
		queue[rear]=x;
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("underflow");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		printf("%d",queue[front]);
		front++;
	}
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("underflow");
	}
	else
	{
		printf("printing values");
		for(i=front;i<=rear;i++)
		printf("%d\n",queue[i]);
	}
}
	
		
	
