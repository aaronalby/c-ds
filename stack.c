#include <stdio.h>
#include <stdlib.h>

int stack[100], top = -1, n;

void push(int value) {
    if (top == n - 1) {
        printf("\n**Stack overflow**\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("\n**Stack underflow**\n");
    } else {
        int pop = stack[top];
        top--;
        printf("%d popped \n", pop);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("\n**Stack elements are **\n");
        for (int i = top; i >= 0; i--) {
            printf("%d  ", stack[i]);
        }
    }
}

int main() {
    int choice, value;

    printf("Enter the stack size : ");
    scanf("%d", &n);

    while (1) {
        
        printf("         Stack Operations        \n");
       
      
        printf("1. Push     \n");
        printf("2. Pop      \n");
        printf("3. Display  \n");
        printf("4. Exit     \n");
  
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be pushed: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting program. Goodbye!\n");
                exit(0);
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
