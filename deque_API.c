#include <stdio.h>

#define size 5

void insert_front();
void delete_front();
void insert_rear();
void delete_rear();

int arr[size];
int front = -1, rear = -1;

void insert_front(int item)
{
	if((front == 0 && rear == size-1) || (front == rear +1))
	{
		printf("deque is full, insertion is not possible");
	}
	else if ((front == -1) && (rear == -1))
	{
		front = rear =0;
		arr[front] = item;
	}
	else if(front == 0)
	{
		front = size -1;
		arr[front] = item;
	}
	else
	{
		front = front -1;
		arr[front] = item;
	}
}

void insert_rear(int item)
{
	if((front == 0 && rear == size -1) || (front == rear + 1))
	{
		printf("Deque is full!");
	}
	else if (front == -1 && rear == -1)
	{
		rear = 0;
		arr[rear] = item;
	}
	else if(rear == size -1)
	{
		rear = 0;
		arr[rear] = item;
	}
	else
	{
		rear++;
		arr[rear] = item;
	}
		
}

void delete_front()
{
	if((front == -1) && (rear == -1))
	{
		printf("There is no element to delete inside this deque");
	}
	else if (front == rear)
	{
		printf("\nThe deleted element from the front is %d", arr[front]);
		front = -1;
		rear = -1;
	}
	else if(front == size -1)
	{
		printf("\nThe deleted element from the front is %d", arr[front]);
		front = 0;
	}
	else
	{
		printf("\nThe deleted element from the front is %d", arr[front]);
	}
}

void delete_rear()
{
	if((front == -1) && (rear == -1))
	{
		printf("\nThere is no element to delete inside the queue");
	}
	else if(front == rear)
	{
		printf("The deleted element from the dequeu using rear node is %d", arr[rear]);
		front = -1;
		rear = -1;
	}
	else if (rear == 0)
	{
		printf("\nThe deleted element from the rear node is %d", arr[rear]);
		rear = size -1;
	}
	else
	{
		printf("\nThe deleted element from the rear node is %d", arr[rear]);
		rear = rear-1;
	}
}

void display()
{
	int i = front;
	printf("\nElements inside the double ended queue are: ");
	while(i != rear)
	{
		printf(" %d", arr[i]);
		i = (i+1)%size;
	}
	printf(" %d", arr[rear]);
}

int main()
{
	insert_front(-5);
	insert_front(23);
	insert_rear(17);
	insert_rear(12);
	insert_rear(47);
	display();
	delete_front();
	delete_rear();
	display();
	
	return 0;
}