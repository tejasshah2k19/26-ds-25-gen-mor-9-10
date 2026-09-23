#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

struct node* addNode(int num)
{

    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->data = num; 
        root->left = NULL;
        root->right = NULL; 
        return root; 
    }else{
        if(num < root->data){
            //left 
            struct node *newNode = (struct node*)malloc(sizeof(struct node));
            newNode->data = num; 
            newNode->left = NULL;
            newNode->right= NULL;
            root->left = newNode;  

        }else{
            //right
            struct node *newNode = (struct node*)malloc(sizeof(struct node));
            newNode->data = num; 
            newNode->left = NULL;
            newNode->right= NULL; 
            root->right = newNode; 
        }
    }
}

int main()
{

    root = addNode(50);
    addNode(100); 
    addNode(30); 

    printf(" %d ",root->data);//50 
    printf(" %d ",root->left->data);//30
    printf(" %d ",root->right->data);//100
    


    return 0;
}