#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};
int get_height(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}
struct node *create_node(int key)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = key;
    n->left = NULL;
    n->right = NULL;
    n->height = 1;
}
int get_bf(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return (get_height(n->left) - get_height(n->right));
}
int max(int a, int b)
{
    return a > b ? a : b;
}
struct node *LL_rotation(struct node *y)
{
    struct node *x = y->left;
    struct node *t2 = x->right;
    // perform LL rotation
    x->right = y;
    y->left = t2;
    y->height = 1 + max(get_height(y->left), get_height(y->right));
    x->height = 1 + max(get_height(x->left), get_height(x->right));
    return x;
}
struct node *RR_rotation(struct node *x)
{
    struct node *y = x->right;
    struct node *t2 = y->left;
    // perform RR rotation
    y->left = x;
    x->right = t2;
    x->height = 1 + max(get_height(x->left), get_height(x->right));
    y->height = 1 + max(get_height(y->left), get_height(y->right));
    return y;
}
struct node *insert(struct node *root, int key)
{
    if (root == NULL)
    {
        return create_node(key);
    }
    if (key > root->data)
    {
        root->right = insert(root->right, key);
    }
    else if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        // duplicate node
        return root;
    }

    root->height = 1 + max(get_height(root->left), get_height(root->right));
    int bf = get_bf(root);
    // LL rotation
    if (bf > 1 && key > root->left->data)
    {
        return LL_rotation(root);
    }
    // LR rotation
    if (bf > 1 && key < root->left->data)
    {
        root->left = RR_rotation(root->left);
        return LL_rotation(root);
    }
    // RR rotation
    if (bf < -1 && key > root->right->data)
    {
        return RR_rotation(root);
    }
    // RL rotation
    if (bf < -1 && key < root->right->data)
    {
        root->right = LL_rotation(root->right);
        return RR_rotation(root);
    }
    return root;
}
void pre_order(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}
void main()
{
    struct node *root = NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    pre_order(root);
}