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
    //         45       79
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
void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
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
    inorder(root);
}