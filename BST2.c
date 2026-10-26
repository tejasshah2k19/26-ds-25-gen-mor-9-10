#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

struct node *addNode(struct node *root, int val) // 90 , 150
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->data = val;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else
    {
        // right
        if (val > root->data)
        {
            root->right = addNode(root->right, val);
        }
        else
        {
            // leff
            root->left = addNode(root->left, val);
        }
    }
    return root;
}

int main()
{

    root = addNode(root, 90);
    addNode(root, 150); // right
    addNode(root, 70);  // left
    addNode(root, 30);
    addNode(root, 80);
    addNode(root, 200);

    printf("\n %d ", root->data); // 90

    printf("\n %d ", root->left->data); // 70

    printf("\n %d ", root->right->data); // 150

    printf("\n %d ", root->right->right->data); // 200

    return 0;
}
