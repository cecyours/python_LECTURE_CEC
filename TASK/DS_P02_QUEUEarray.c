

#include<stdio.h>
#include<stdlib.h>
int queue[10];
int ind=-1;
int i;
int enqueue(int data) //insert
{
    if (ind >= 10)
        {
            printf("\n%d couldn't insert due. queue is full.\n",data);
            return 0;
        }
    queue[++ind] = data;
}

int dequeue() //delete
{
    if (ind<0)
    {
            printf("\ncouldn't delete an element... queue is empty..\n");
    }
    else
    {
        printf("\t%d is deleted...\n",queue[0]);
    }

    for(i=1;i<ind+1;i++)
    {
        queue[i-1] = queue[i];
    }
    ind--;
    return queue[0];
}

int display()
{
    printf(" \n Display [ ");

    for(i=ind;i>0;i--)
    {
        printf("%d, ",queue[i]);
    }
    printf(" %d ] \n\n",queue[i]);
}
int main()
{
  
  int choice;
  int data;
  
      printf("1 for insert : \n");
      printf("2 for delete : \n");
      printf("3 for display : \n");
      printf("4 for exit : \n");

  
  do{
      printf("Enter choice : ");
      scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("enter the data : ");
            scanf("%d",&data);
            enqueue(data); break;
        case 2:
            dequeue();break;
        
        case 3: display(); break;
        case 4: exit(0);
        default: printf("plz enter the valid choice...");
    }
  }while(choice<4);

}