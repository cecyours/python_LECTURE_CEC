
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head = NULL;

void insertFront()
{
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    
    printf("enter the data : ");
    scanf("%d",&newNode->data);
    
   printf("insertion done...\n");

    if(!head)
    {
        head = newNode;
        return;
    }

   newNode->next = head;
   head = newNode;
}

void insertEnd()
{
    struct Node *temp,*newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    
    printf("enter the data : ");
    scanf("%d",&newNode->data);
    
    if(!head)
    {
        head = newNode;
        return;
    }

    temp = head;

    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;

   printf("insertion done...\n");

}
 
void insertSort()
{
      struct Node *temp,*newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    
    printf("enter the data : ");
    scanf("%d",&newNode->data);
    
    printf("insertion done...\n");

    if(!head)
    {
           head = newNode; // newNode is head is there is neither a Node nor newNode->data is smaller than head.
        return;
    }

    if(!head->next) // if second Node is NULL
    {
        if(newNode->data > head->data)
            {
                head->next = newNode;
                return;
            }
            newNode->next = head;
            head = newNode; // newNode is head is there is neither a Node nor newNode->data is smaller than head.

            return;
    }

    temp = head;
    while(temp->next)
    {
            if(newNode->data > temp->data && newNode->data < temp->next->data)
            {
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
    temp = temp->next;

    }
    temp->next = newNode;

}


void display()
{
    struct Node *temp;
    
    if(!head)
    {
        printf("Linked list is empty ...\n");
    }
    temp = head;

    printf("linked list : ");
    while(temp->next)
    {
        printf("%d -> ",temp->data);
        temp = temp->next; //increment
    }
    printf("%d.",temp->data);

}

int main()
{
    

    insertFront();
    insertFront();
    insertEnd();   
    insertSort();  
    display();
}