#include <stdio.h>
#define SIZE 5

int arr[SIZE];

void insert(int location, int data)
{
    // logic
}

void display()
{
    printf("\nArray Elements : ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

int main()
{

    insert(1, 10);
    insert(2, 20);
    insert(3, 30);
    display(); 
    insert(2, 200);
    insert(1, 100);
    display(); //100 10 200 20 30 
    return 0;
}
