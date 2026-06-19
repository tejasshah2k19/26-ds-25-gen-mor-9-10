#include <stdio.h>
#define SIZE 5

int arr[SIZE];

void insert(int location, int data)
{
    int index = location - 1;

    for (int i = SIZE - 1; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = data;
}

void display()
{
    printf("\nArray Elements : ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

void removeItem(int location)
{
    int index = location - 1;

    for (int i = index; i < SIZE; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()
{

    insert(1, 10);
    insert(2, 20);
    insert(3, 30);

    display(); // 10 20 30

    insert(1, 40); // 40 10 20 30

    insert(2, 50);

    display(); // 40 50 10 20 30

    insert(1, 100); // 100 40 50 10 30

    insert(3, 200);
    display(); // 100 40 200 50 10

    removeItem(1);
    display();// 40 200 50 10 0 
    removeItem(3);//
    display();// 40 200 10 0 0 
     
    

    return 0;
}
