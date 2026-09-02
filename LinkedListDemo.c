#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL; // first node
struct node *last = NULL;

void addNode(int data)
{

    struct node *tmp;

    if (head == NULL)
    {
        // first time insertion --- head
        head = (struct node *)malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        last = head;
    }
    else
    {
        // add at the end of linked list
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = data;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}
void display()
{

    struct node *p;

    p = head;
    printf("\nLinkedList => ");
    while (p != NULL)
    {
        printf(" %d ", p->data); // 10
        p = p->next;
    }
}

void addNodeBeg(int num)
{
    struct node *tmp;

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = head;
    head = tmp;
}

void searchItem(int item)
{ // 30 : found , 35 : not found

    struct node *p;
    int found = 0; // false
    p = head;

    while (p != NULL)
    {
        if (p->data == item)
        {
            found = 1; // true
            break;
        }

        p = p->next;
    }

    if (found == 0)
    {
        printf("\n%d Not Found ", item);
    }
    else
    {
        printf("\n%d  Found ", item);
    }
}

int length()
{

    struct node *p = head;
    int count = 0;

    while (p != NULL)
    {
        count++;
        p = p->next;
    }

    return count; // total items / node in list
}

int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);

    // printf(" %d  %d %d %d ", head->data, head->next->data, head->next->next->data, head->next->next->next->data);
    display();
    addNodeBeg(7);
    display();
    return 0;
}