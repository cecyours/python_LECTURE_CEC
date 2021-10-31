
#include <stdio.h>
#include <stdlib.h>

struct Stack{
    int data;
    struct Stack *next;
}*head;

void push(int x)
{
    struct Stack *temp,*newElement;
    newElement = (struct Stack*)malloc(sizeof(struct Stack));

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

void pop(){
 struct Stack *temp;

    if(!head)
    {
        printf("stack underflow : stack is empty .. pop failed...\n");
        return;
    }
     temp = head;
    while(temp->next->next)
    {
        temp = temp->next;
    }
    printf("%d is poped ... \n",temp->next->data);
    temp->next = NULL;
}

void peek()
{
     struct Stack *temp;

    if(!head)
    {
        printf("stack underflow : stack is empty .. peek failed...\n");
        return;
    }
     temp = head;
    while(temp->next)
    {
        temp = temp->next;
    }
    printf("%d is peeked ... \n",temp->data);
}

void display()
{
     struct Stack *temp;
     
     if(!head)
     {
         printf("Stack is empty..");
         return;
     }

    temp = head;

    printf("stack : [ ");
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
   
   printf("\n1 for push : ");
   printf("\n2 for pop : "); 
   printf("\n3 for peek : ");
   printf("\n4 for display: "); 
   printf("\n5 for exit : "); 

   do{
       printf("\nenter choice : ");
       scanf("%d",&choice);

            switch(choice)
            {
                case 1: 
                    printf("enter the data : ");
                    scanf("%d",&data);
                    push(data);break;
                case 2: pop();break;
                case 3: peek();break;
                case 4: display(); break;
                case 5: exit(0);
                default: printf("invalid choice try agai....");
                    
            }
   }while(1);


}

