
#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int data;
    struct Queue *next;
}*head;

void enqueue(int x)
{
    struct Queue *temp,*newElement;
    newElement = (struct Queue*)malloc(sizeof(struct Queue));

    newElement->data = x;

    printf("%d is inserted ...\n",x);
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
    temp->next = newElement;

}

void dequeue(){
 struct Queue *temp;

    if(!head)
    {
        printf("Queue is empty .. dequeue failed...\n");
        return;
    }
    printf("%d is dequeued...\n",head->data);
    head = head->next;
}


void display()
{
     struct Queue *temp;
     
     if(!head)
     {
         printf("Queue is empty..⇄ ");
         return;
     }

    temp = head;

    printf("Queue : [ ");
     while(temp->next)
     {
         printf("%d, ",temp->data);
         temp = temp->next; 
     }
     printf("%d ] \n",temp->data);
}
int main()
{

  int choice,data;
   
   printf("\n1 for enqueue : ");
   printf("\n2 for dequeue : "); 
   printf("\n3 for display: "); 
   printf("\n4 for exit : "); 

   do{
       printf("\nenter choice : ");
       scanf("%d",&choice);

            switch(choice)
            {
                case 1: 
                    printf("enter the data : ");
                    scanf("%d",&data);
                    enqueue(data);break;
                case 2: dequeue();break;
                case 3: display();break;
                case 4: exit(0); break;
                default: printf("invalid choice try again....");
                    
            }
   }while(1);
}

