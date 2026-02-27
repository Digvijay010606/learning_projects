#include <stdio.h>
#include <stdlib.h>

// defining the structure of the stack
#define MAX 100  // defining max. capacity of stack
int stack[MAX];  // defined the stack
int top = -1;    // assigned top at starting


// defining the push operation for the stack
void push(int value){
    // checking if the stack is full or not
    if(top == MAX-1){
        printf("Overflow\n");
        return;
    }
    top++;  // moving top up to add new value
    stack[top] = value;  // assigned value
    return;
}


// defining the pop operation for the stack
void pop(){
    // checking if the stack if empty or not
    if(top<0){
        printf("Underflow\n");
        return;
    }
    int deletedVale = stack[top];  // storing the deleted value to print
    top--;  // moving top down to remove value
    printf("Popped: %d\n", deletedVale);
    return;
}

// defining the peek operation for the stack
void peek(){
    printf("Top: %d\n", stack[top]);  // printed top value
    return;
}


// defining the isEmpty operation for the stack
void isEmpty(){
    if(top<0){   // condition for the empty stack
        printf("Empty\n");
        return;
    }
    else{
        printf("Not Empty\n");
        return;
    }
}


// defining the isFull operation for the stack
void isFull(){
    if(top==MAX-1){   // condition for the full stack
        printf("Full\n");
        return;
    }
    else{
        printf("Not Full\n");
        return;
    }
}



int main(){
    int n, val;  // n for selecting operations and val for pushing data
    while(1){
        printf("STACK:\n");
        printf("1. push\n2. pop\n3. peek\n4. isEmpty\n5. isFull\n");
        printf("Enter no.(1 to 5): ");
        scanf("%d", &n);
        system("cls");
        switch(n){
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &val);
            push(val);
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
            isFull();
            break;
        default:
            printf("please! enter between 1 to 5\n");
        }
        printf("Type ok and then Press Enter to continue!\n");
        char continue_loop[100];
        scanf("%s", continue_loop);
        system("cls");
    }
    return 0;
}
