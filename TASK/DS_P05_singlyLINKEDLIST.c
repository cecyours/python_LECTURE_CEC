
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head = NULL;

void insertFront()
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

   newNode->next = head;
   head = newNode;
}
void display()
{
    struct Node *temp;
    
    if(!head)
    {
        printf("Linked list is empty ...\n");
    }
    temp = head;

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
    insertFront();
    insertFront();
    insertFront();
    insertFront();
    insertFront();


    display();
}