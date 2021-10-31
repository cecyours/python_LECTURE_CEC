
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

    push(10);
    push(20);
    push(30);
    push(40);

    display();
    peek();
    pop();
    pop();
    peek();
    display();

}

