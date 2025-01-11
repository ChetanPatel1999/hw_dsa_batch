#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *createnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
struct node *insertnode(struct node *root, int data)
{
    if (root == NULL)
    {
        return createnode(data);
    }
    else if (root->data > data)
    {
        root->left = insertnode(root->left, data);
    }
    else
    {
        root->right = insertnode(root->right, data);
    }

    return root;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
struct node *inorder_succesor(struct node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
struct node *delete_node(struct node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    // serach node
    if (data < root->data)
    {
        root->left = delete_node(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = delete_node(root->right, data);
    }
    else
    {
        // case 1 : leaf node
        // case 2: only have one child
        if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        else if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else
        {
            // root node or node have two child
            struct node *temp = inorder_succesor(root->right);
            root->data = temp->data;
            root->right = delete_node(root->right, temp->data);
        }
    }
    return root;
}
void main()
{
    struct node *root = NULL;
    root = insertnode(root, 45);
    root = insertnode(root, 15);
    root = insertnode(root, 79);
    root = insertnode(root, 10);
    root = insertnode(root, 20);
    root = insertnode(root, 55);
    root = insertnode(root, 90);
    root = insertnode(root, 50);
    inorder(root);
    printf("\n");
    root = delete_node(root, 50);
    inorder(root);
    printf("\n");
    root = delete_node(root, 45);
    inorder(root);
    printf("\n");
    root = delete_node(root, 90);
    inorder(root);
    printf("\n");
}