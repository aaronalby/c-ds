#include<stdio.h>
void push();
void pop();
void display();
int stack[50],n,i,item,top=-1;
void main()
{
    int choice=0;
    printf("Enter the size of the stack: ");
    scanf("%d",&n);
    while (choice!=4) {
        printf("         Stack Operations        \n");
       
      
        printf("1. Push     \n");
        printf("2. Pop      \n");
        printf("3. Display  \n");
        printf("4. Exit     \n");
  
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exited successfully\n");
                break;
            default:
                printf("Invalid Input!");
        }
    }
}
void push() {
    if (top==(n-1))
        printf("Stack Overflow \n");
    else {
        printf("Enter element to be pushed: ");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
}
void pop() {
    if (top==-1)
        printf("Stack Underflow \n");
    else {
        printf("\nPopped item is %d",stack[top]);
        top--;
    }
}
void display() {
    if (top==-1)
        printf("Stack Empty \n");
    else {
        printf("\nGiven stack is");
        for (i=top; i>=0; i--) {
            printf("\n%d",stack[i]);
        }
    }
}
