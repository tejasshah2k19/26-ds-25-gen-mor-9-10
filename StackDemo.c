#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1; // EMPTY

void push(int data)
{
    if (top == SIZE - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\n STACK UNDERFLOW");
    }
    else
    {
        printf("\n %d pop ", stack[top]);
        top--;
    }
}

void display()
{
    printf("\nSTACK : ");
    for (int i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

int main()
{

    push(10);
    push(20);
    push(30);
    display();//30 20 10 
    push(40);
    push(50);
    push(60);//OVERFLOW
    display();//50 40 30 20 10 
    pop();
    pop();
    display();// 30 20 10 
    pop();
    pop();
    pop();
    pop();//UNDERFLOW
    


    return 0;
}