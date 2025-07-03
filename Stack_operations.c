#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow! Cannot push element.\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n",value);
    }
}


void pop() {
    if (top == -1) {
        printf("Stack underflow! Cannot pop element.\n");
    } 
    else {
        int popped = stack[top];
        top--;
        printf("Popped element: %d\n", popped);
    }
}


void peek() {
    if (top == -1) {
        printf("Stack is empty. No top element.\n");
    } 
    else {
        printf("Top element: %d\n", stack[top]);
    }
}


void isEmpty() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } 
    else {
        printf("Stack is not empty.\n");
    }
}

void isFull() {
    if (top == MAX - 1) {
        printf("Stack is full.\n");
    } 
    else {
        printf("Stack is not full.\n");
    }
}


void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } 
    else {
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int op, value;

    while (1) {
        if(scanf("%d", &op) != 1) break ;
        switch (op) {
            case 1:
                 if(scanf("%d", &value) != 1) break ;
                push(value);
                break;
            case 2: 
                pop();
                break;
            case 3: 
                peek();
                break;
            case 4: 
                isEmpty();
                break;
            case 5: 
                display();
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
                
            default:
                printf("Invalid input.\n");
        }
    }
    printf("Exiting...\n");

    return 0;
}