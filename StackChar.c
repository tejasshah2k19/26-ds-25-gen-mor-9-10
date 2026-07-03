#include <stdio.h>
#define SIZE 50

char stack[SIZE];
int top = -1; // EMPTY

void push(char data)
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
        printf("\n %c pop ", stack[top]);
        top--;
    }
}

void display()
{
    printf("\nSTACK : ");
    for (int i = top; i >= 0; i--)
    {
        printf("%c", stack[i]);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("\n STACK UnderFlow ... ");
    }
    else
    {
        printf(" %c ", stack[top]);
    }
}

void peep(int location)
{

    if (top == -1)
    {
        printf("\n STACK UnderFlow ... ");
    }
    else
    {
        int index = top - location + 1;
        printf(" %d ", stack[index]);
    }
}

int main()
{

    char str[SIZE];//0:r 1:o 2:y 3:a 4:l 5:'\0' 
    int i; 

    printf("Enter String ");
    scanf("%s",&str);//royal 

    for(int i=0; str[i]!='\0';i++){
        push(str[i]);//r 
    }

    display();

    return 0;
}
 
