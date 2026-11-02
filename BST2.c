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

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}

struct node *inOrderSuccessor(struct node *root)
{

    if (root != NULL)
    {
        inOrderSuccessor(root->left);
    }
    return root;
}

struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
    {
        printf("\nNot Found");
    }
    else if (key == root->data)
    {
        if (root->left == NULL && root->right == NULL)
        {
            printf("\n0 Child");
            free(root);
            return NULL;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            struct node *tmp = root->right;
            printf("\n1 child : right present");
            free(root);
            return tmp;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            struct node *tmp = root->left;
            printf("\n1 child : left present");
            free(root);
            return tmp;
        }
        else if (root->left != NULL && root->right != NULL)
        {
            printf("\n2 child");
            // InOrderSuccessor
            // InOrderPredecessor
            struct node *smallest = inOrderSuccessor(root->right);
            printf("\nnew root -> %d ", smallest->data);
            root->data = smallest->data;             // replace value
            deleteNode(root->right, smallest->data); // delete that smallest node from right side
            return smallest;
        }
    }
    else if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
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

    // printf("\n %d ", root->data); // 90

    // printf("\n %d ", root->left->data); // 70

    // printf("\n %d ", root->right->data); // 150

    // printf("\n %d ", root->right->right->data); // 200

    inOrder(root);
    deleteNode(root, 90); //
    printf("\nAfter Deletion : \n");
    inOrder(root);

    return 0;
}
