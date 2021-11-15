#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head;

void insert_end(int n)
{
    struct Node *temp,*newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if(!newNode)
    {
        printf("Overflow ....\n");
        return;
    }
     newNode->data = n;
     
    if(!head){
    
        head=newNode;
        newNode->next=head;
        return;
    }
   
    temp = head;

    while(temp->next != head)
    {
        
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next=head;
    
}
void insert_pos(int n,int pos)
{
    struct Node *temp,*newNode;
    int i=0;
    newNode = (struct Node*)malloc(sizeof(struct Node));   
    pos = pos-1;
    newNode->data = n;
    if(pos<=0)
    {
        printf("Pls enter the valid position..\n");
    }
    
    temp = head;
    while(temp->next!=head)
    {
        i++;
        if(i==pos)
        {
            newNode->next = temp->next;
            temp->next = newNode;
            printf("Node inserted at before %d position...\n",pos+1);
            return;
        }
       temp = temp->next;
    }
    printf("Position is invalid...\n");
}
void delete_first()
{
    struct Node *temp;

    if(!head)
    {
        printf("There is no Node...");
        return;
    }
    if(head->next==head)
    {
        head=NULL;
        return;
    }
    temp=head;
    
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    head = head->next;
    temp->next = head;
}
void delete_pos(int pos)
{
    int i=1;
    struct Node *temp;
    pos += 1;

    if(!head)
    {
        printf("there is No Node to DELETE..\n");
        return;
    }
    
    temp = head;
    while(temp->next!=head)
    {
        i++;
        printf("%d ,%d \n",i,pos);
        if(pos==i)
        {
            printf("Deleted Node... %d\n",temp->next->data);
            temp->next = temp->next->next;
            return;
        }
        temp=temp->next;
    }
    
    printf("unable to delete Node.\n");
}
void display()
{
    struct Node *temp;

    if(!head)
    {
        printf("there is no Node to display...\n");
        return;
    }
    temp=head;

    printf("Linked LIST : [ ");
    while(temp->next!=head)
    {
        printf("%2d -> ",temp->data);
        temp= temp->next;
    }
    printf("%d ]\n",temp->data);
}

int main()
{
    int pos, n,choice;

    printf("Enter 1 for   insert_end : \n");
    printf("Enter 2 for   insert_pos : \n");
    printf("Enter 3 for delete_first : \n");
    printf("Enter 4 for   delete_pos : \n");
    printf("Enter 5 for      display : \n");
    printf("Enter 6 for         exit : \n");

    do{
        printf("\nEnter a choice : ");
        scanf("%d",&choice);

            switch(choice)
            {
                case 1:printf("Enter the element : ");
                        scanf("%d",&n);
                        insert_end(n);break;
                case 2:printf("Enter the element : ");
                        scanf("%d",&n);
                        printf("Enter the position : ");
                        scanf("%d",&pos);
                        insert_pos(n,pos);break;
                case 3:delete_first();break;
                case 4:printf("Enter the position : ");
                       scanf("%d",&pos);
                       delete_pos(pos);break;
                case 5:display();break;
                case 6:exit(0);break;
                default:printf("Plz Enter a valid Choice...\n");
            }
    }while(1);

}