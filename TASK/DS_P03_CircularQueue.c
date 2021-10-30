

#include<stdio.h>
#include<stdlib.h>
int queue[10];
int ind=-1;
int i,f;
int max = 10;
int enqueue(int data) //insert
{
    if (ind >= 9)
        {
            ind = -1; //reset the queue bcz it is already full..
            f = 1;
        }
    ind++;
    queue[ind] = data;
    // printf("data %d : %d\n",ind,queue[ind]);
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
void add(int n)
{

    int last = queue[ind];
    for(i=1;i<=n;i++)
        enqueue(last+i); //add elements with sequence according last value..
}
int display()
{
    int size;
    printf(" \n Display [ ");
    if(f)
        {
            size = max-1;
        }
        else
        {
            size = ind;
        }

    for(i=size;i>0;i--)
    {
        printf(" %d, ",queue[i]);
    }
    printf(" %d ] \n\n",queue[i]);
}
int main()
{
  
  int choice;
  int data;
  
      printf("1 for initialized : \n");
      printf("2 for insert : \n");
      printf("3 for delete : \n");
      printf("4 for display : \n");
      printf("5 for exit : \n");

  
  do{
      printf("Enter choice : ");
      scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
            printf("enter no of elements : ");
            scanf("%d",&data);
            add(data);
            break;
        case 2:
            printf("enter the data : ");
            scanf("%d",&data);
            enqueue(data); break;
        case 3:
            dequeue();break;
        
        case 4: display(); break;
        case 5: exit(0);
        default: printf("plz enter the valid choice...");
    }
  }while(choice<5);

}