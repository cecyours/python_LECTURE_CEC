
#include<stdio.h>
#include<stdlib.h>

int stack1[10],i1=5;
int stack2[10],i2=4;
int queue3[10],i3=5;
int i;

void initializeDS(int ds[],int data,int n)
{
    for(i=0;i<n;i++)
    {
        ds[i] = data+i;
    }
}

void stack2stack(int stack1[],int *i1,int stack2[],int *i2)
{
    int j=*i2-1;
    for(i=*i1;i<*i1+*i2;i++,j--)
    {
        stack1[i] = stack2[j];
    }
    *i1 = *i1+*i2;
    // printf("size : %d\n",i1);
}
void queue2stack(int stack[],int *i1,int queue[],int *i2)
{
    int j=*i1;
    for(i=0;i<*i2;i++,j++)
    {
        stack[j] = queue[i];
        // printf("%d \n",queue3[i]);
    }
    *i1 = *i1+*i2;
}

void queueReverse(int stack[],int *i2,int queue[],int *i3)
{
   int j=0;
   for(i=*i3-1;i>0;i--,j++)
   {
       stack[j] = queue[i];
   }
   *i2 = *i3;
}

 
void display(int ds[],int n){
    
    printf(" [ ");
    for(i=n-1;i>0;i--)
    {
        printf("%2d, ",ds[i]);
    }
    printf(" %d ]\n",ds[i]);
}

int main()
{
    initializeDS(stack1,11,i1);
    initializeDS(stack2,21,i2);
    initializeDS(queue3,31,i3);

    printf("\n\n----------- task 1 : stack2stack -------- \n");
     printf("stack 1 : "); display(stack1,i1); 
     printf("stack 2 : "); display(stack2,i2);
     stack2stack(stack1,&i1,stack2,&i2);
     printf("stack 1 : "); display(stack1,i1);
     

     printf("\n\n----------- task 2 : queue2stack -------- \n");
     printf("stack  : "); display(stack2,i2); 
     printf("queue  : "); display(queue3,i3);
     queue2stack(stack2,&i2,queue3,&i3);
     printf("stack  : "); display(stack2,i2);


     printf("\n\n----------- task 3 : queueReverse -------- \n");
     printf("queue  : "); display(queue3,i3);
     queueReverse(stack2,&i2,queue3,&i3);
     printf("stack  : "); display(stack2,i2);
}