//  ⇄ 

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next,*pre;
}*head;

void insertFront(int x)
{
     struct Node *temp,*newElement;
    newElement = (struct Node*)malloc(sizeof(struct Node));
    newElement->data = x;

    printf("%d is inserted at Front.\n",x);
    if(!head)
    {
        head = newElement;
        return;
    }
   
        newElement->pre = NULL;
        newElement->next = head;
        head->pre = newElement;
        head = newElement;
    
}

void insertLast(int x)
{
     struct Node *temp,*newElement;
    newElement = (struct Node*)malloc(sizeof(struct Node));
    newElement->data = x;

    printf("%d is inserted at end.\n",x);
    if(!head)
    {
        head = newElement;
        return;
    }
   
    temp = head;

    while(temp->next)
    {
        temp = temp->next;
    }
    newElement->pre = temp;
    temp->next = newElement;
    newElement->next = NULL;
}

void deleteLast()
{
    struct Node *temp;
    if(!head)
    {
        printf("List is empty,...\n");
        return;
    }

    temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }

    temp->pre = NULL;
    temp->next = NULL;
    // temp->next=NULL;

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
            // printf("data : %d-%d\t",temp->data,i);
            if(i+1 == pos)
            {
                temp->next->next->pre = temp->next;
                temp->next = temp->next->next;

            //   printf("data : %d-%d\t",temp->data,i);

                // return;
            }
            
            temp = temp->next;
            i++;
        }
        return;
    }
    printf("invalid position ...");

}
void display()
{   
     struct Node *temp;
    if(!head)
    {
        printf("List is empty,...\n");
        return;
    }

    temp = head;

    printf(" list : [ %d ",temp->data);
    temp = temp->next;
    while(temp)
    {
        printf(" ⇄ %d",temp->data);
        temp = temp->next;
    }
    printf(" ].\n");

}
int main()
{
   int choice,data,pos;
   
   printf("\n1 for insertFront : ");
   printf("\n2 for insertLast : "); 
   printf("\n3 for deleteLast : ");
   printf("\n4 for before delete : ");
   printf("\n5 for display: "); 
   printf("\n6 for exit : "); 

   do{
       printf("\nenter choice : ");
       scanf("%d",&choice);

            switch(choice)
            {
                case 1: 
                    printf("enter the data : ");
                    scanf("%d",&data);
                    insertFront(data);break;
                case 2:
                    printf("enter the data : ");
                    scanf("%d",&data);
                    insertLast(data);break;

                case 3: deleteLast();break;
                case 4: 
                        printf("Enter the position : ");
                        scanf("%d",&pos);
                        delete(pos-1);
                        break;
                case 5: display(); break;
                case 6: exit(0);
                default: printf("invalid choice try agai....");
                    
            }
   }while(1);


}   