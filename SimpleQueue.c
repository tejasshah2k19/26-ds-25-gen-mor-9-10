#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

int isEmpty()
{
    // true -> empty
    // false -> not empty
    if (front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enQueue(int data)
{

    if (rear == SIZE - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {

        rear++;
        queue[rear] = data;

        // first time insertion -> front = 0

        if (front == -1)
        {
            front = 0;
        }
    }
}

void deQueue()
{

    if (isEmpty())
    {
        printf("\nQueue is Empty");
    }
    else if (front == rear)
    {
        printf("\n%d removed ", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {

        printf("\n%d removed ", queue[front]);
        front++;
    }
}

void display()
{

    if (isEmpty())
    {
        printf("\nQueue is Empty");
    }
    else
    {

        printf("\nQueue data : ");
        for (int i = front; i <= rear; i++)
        {
            printf(" %d ", queue[i]);
        }
    }
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);

    deQueue();
    display(); //   20 30 40
    deQueue();
    enQueue(50);
    display();
    enQueue(60);

    deQueue(); // 30
    deQueue(); // 40
    deQueue(); // 50
    deQueue(); //?

    return 0;
}