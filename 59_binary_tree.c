#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create_node(int num)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = num;
    p->left = NULL;
    p->right = NULL;
    return p;
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
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
void main()
{
    struct node *root, *r1, *l1, *r1l, *r1r, *l1l, *l1r;
    root = create_node(12);
    l1 = create_node(5);
    r1 = create_node(8);
    l1l = create_node(45);
    l1r = create_node(6);
    r1l = create_node(9);
    r1r = create_node(23);
    root->left = l1;
    root->right = r1;
    l1->left = l1l;
    l1->right = l1r;
    r1->left = r1l;
    r1->right = r1r;
    inorder(root);
}