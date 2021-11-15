
#include<stdio.h>
#include<stdlib.h>

struct BStree{

    int data;
    struct BStree *right,*left;
};

void createBST(struct BStree **root,int data)
{
    struct BStree *temp = (struct BStree*)malloc(sizeof(struct BStree));

    temp->data= data;
    temp->right=NULL;
    temp->left=NULL;

    struct BStree *t = *root;
    if(*root==NULL)
    {
        *root = temp;
        return;
    }
    if(data < t->data)
    {
        createBST(&(t->left),data);
    }
    else
    {
        createBST(&(t->right),data);
    }
}

void display(struct BStree *root)
{
    if(root!=NULL)
    {
        display(root->left);
        display(root->right);
        printf("%d ",root->data);
    }
}

int main()
{
    struct BStree *root = NULL;
    int i,n,data;

    printf("Enter no of Data : ");
    scanf("%d",&n);

    printf("Enter collection ---\n");
    for(i=0;i<n;i++)
    {
        printf("Enter data :  ");
        scanf("%d",&data);
        createBST(&root,data);
    }

    display(root);
}