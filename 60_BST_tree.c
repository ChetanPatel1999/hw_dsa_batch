// is BST or not
#include <stdio.h>
#include <stdlib.h>
int arr[7];
int i=0;
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
        arr[i]= root->data;
        i++;
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
int is_arr_sorted()
{
    // 12 34 56 788 90
    for(i=0;i<6;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 0;
        }
    }
    return 1;
}
void main()
{
    struct node *root, *r1, *l1, *r1l, *r1r, *l1l, *l1r;
    root = create_node(40);
    l1 = create_node(30);
    r1 = create_node(50);
    l1l = create_node(25);
    l1r = create_node(35);
    r1l = create_node(45);
    r1r = create_node(60);
    root->left = l1;
    root->right = r1;
    l1->left = l1l;
    l1->right = l1r;
    r1->left = r1l;
    r1->right = r1r;
    inorder(root);
    printf("\n");
    if(is_arr_sorted())
    {
       printf("binary tree is BST");
    }
    else{
        printf("binary tree is not BST");
    }
    
}