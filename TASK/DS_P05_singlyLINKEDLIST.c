
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

/* - - -- -- - - -- - - -- - - -- */

void display()
{
    struct Node *temp;
    
    if(!head)
    {
        printf("Linked list is empty ...\n");
    }
    temp = head;

    printf("\nlinked list : ");
    while(temp->next)
    {
        printf("%d -> ",temp->data);
        temp = temp->next; //increment
    }
    printf("%d.\n\n",temp->data);

}

/* - - -- -- - - -- - - -- - - -- */

void deleteFront(){
    struct Node *temp;

    if(!head)
    {
        printf("There is no node to delete..\n");
        return;
    }
    printf("%d is deleted as first NOde deletion.. \n",head->data);
    head = head->next;

}
void delete(int pos)
{
    int i=1;
    struct Node *temp;

    if(!head)
    {
        printf("no Node available..\n");
        return;
    }

    if(pos==1)
    {
        head = head->next;
        return;
    }
    else
    {
        temp = head;
        // head = NULL;
        while(temp)
        {
            printf("data : %d-%d\t",temp->data,i);
            if(i+1 == pos)
            {
                temp->next = temp->next->next;
              printf("data : %d-%d\t",temp->data,i);

                // return;
            }
            temp = temp->next;
            i++;
        }
        return;
    }
    printf("invalid position ...");

}
int main()
{
   int choice,position;
   
   printf("\n1 for insert Front : ");
   printf("\n2 for insert End : "); 
   printf("\n3 for insert sort : ");
   printf("\n4 for delete Front : "); 
   printf("\n5 for before pos. : "); 
   printf("\n6 for after pos. : "); 
   printf("\n7 for display : "); 
   printf("\n8 for exit : "); 

   do{
       printf("\nenter choice : ");
       scanf("%d",&choice);

            switch(choice)
            {
                case 1: insertFront();break;
                case 2: insertEnd();break;
                case 3: insertSort();break;
                case 4: deleteFront(); break;
                case 5: 
                        printf("Enter the position to delete before position : ");
                        scanf("%d",&position);
                        delete(position-1); break;
                case 6: 
                        printf("Enter the position to delete after position : ");
                        scanf("%d",&position);
                        delete(position+1); break;
                case 7: display(); break;
                case 8: exit(0);
                default: printf("invalid choice try agai....");
                    
            }
   }while(1);





}