#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node * creatnode(int data)
{
    struct node * n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void insert(struct node **root,int data)
{
    struct node *current=*root;
    struct node *perent=NULL;
    while(current!=NULL)
    {
        perent=current;
        if(current->data==data)
        {
            printf("duplicate element");
            return;
        }
        else if(data>current->data)
        {
            current=current->right;
        }
        else{
            current=current->left;
        }
    } 
    if(perent==NULL)
    {
        *root=creatnode(data);
    }
    else if(perent->data<data)
    {
        perent->right=creatnode(data);
    }
    else{
        perent->left=creatnode(data);
    }
}
void main()
{
 struct node *root=NULL;
 insert(&root,45);
 insert(&root,20);
 insert(&root,15);
 insert(&root,10);
 insert(&root,90);
 insert(&root,55);
 insert(&root,50);
 insert(&root,12);
 insert(&root,79);
 inorder(root);
}