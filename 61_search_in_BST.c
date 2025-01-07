// is BST or not
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
struct node * search(struct node *root,int item)//20
{
     if(root== NULL || root->data==item )
     {
        return root;
     }
     else if(item<root->data)
     {
        return search(root->left,item);
     }
     else{
        return search(root->right,item);
     }
}
struct node * search_iterative(struct node *root,int item)//20
{
     while(root!=NULL)
     {
        if(root->data==item)
        {
            return root;
        }
        else if(root->data<item)
        {
            root=root->right;
        }
        else{
            root=root->left; 
        }
     }
     return root;
}
void main()
{
    struct node *root, *r1, *l1, *r1l, *r1r, *l1l, *l1r;
    root = create_node(45);
    l1 = create_node(15);
    r1 = create_node(79);
    l1l = create_node(10);
    l1r = create_node(20);
    r1l = create_node(55);
    r1r = create_node(90);
    root->left = l1;
    root->right = r1;
    l1->left = l1l;
    l1->right = l1r;
    r1->left = r1l;
    r1->right = r1r;
    inorder(root);
    struct node *ptr=search_iterative(root,55);
    if(ptr!=NULL)
    {
        printf("\n%d element find ",ptr->data);
        
    }
    else{
        printf("\nelement not find");
    }

}