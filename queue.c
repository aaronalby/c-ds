
#include<stdio.h>
void enqueue();
void dequeue();
void display();
int queue[50],front=-1,rear=-1,item,max_size;
void main()
{ 
	int choice=0;
	printf("Enter the size of queue: ");
	scanf("%d",&max_size);
	while (choice!=4) {
		printf("\n       Queue Operations        \n");
            
        printf("1. Enqueue  \n");
        printf("2. Dequeue  \n");
        printf("3. Display  \n");
        printf("4. Exit     \n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
		switch (choice) {
			case 1: 
				enqueue();
				break;
			case 2: 
				dequeue();
				break;
			case 3: 
				display();
				break;
			case 4: 
				printf("Successfully exited from the program\n");
				break;
			default:
				printf("Invalid Input!");
		}
	}
}
void enqueue() {
	if (rear == max_size-1) 
		printf("Queue Overflow !");
	else {     
		printf("Enter the element to enqueue: ");
		scanf("%d",&item);
		if (front == -1 && rear == -1) {
			rear=0;
			front=0;
		}
		else 
			rear++;
		queue[rear]=item;
	}
}
void dequeue() {
	if (front == -1 && rear == -1)                  
		printf("Queue Underflow Error!");
	else {
		printf("Deleted element is %d",queue[front]);
		if (front == rear) {
			front=-1;
			rear=-1;
		}
		else 
			front++;
	}
}
void display() {
	if (front == -1 && rear == -1) 
		printf("Queue Empty!");
	else {
		printf("\nGiven queue is: \n");
		for (int i=front; i<=rear; i++) 
			printf("%d \t",queue[i]);
	}
}
