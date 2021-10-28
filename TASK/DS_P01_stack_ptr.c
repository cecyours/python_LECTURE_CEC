

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int *stack_ptr;	 
int a[20];

void push() 
{
	int x;
	printf("Enter new data : ");
	scanf("%d",&x);

	*stack_ptr = x;
	stack_ptr++; // change the next position of new element

	*stack_ptr = '\0';
}

int peek()
{
	stack_ptr--;

	if(!(*stack_ptr)) // if stack is empty
		return INT_MAX;

	return *stack_ptr;
}
void initialize(int n)
{
	stack_ptr = a;
	int i;
	for(i=0;i<n;i++)
		push();
}
int third()
{
	stack_ptr -= 2;

	if(!(*stack_ptr))
		return INT_MAX;
	
	return *stack_ptr;	
}
int bottom()
{

	return a[0]; 
}	
void display()
{

	stack_ptr = a;

	while(*stack_ptr)
	{
		printf("data  : %d\n",*stack_ptr);
		stack_ptr++;
	}
}
void remove1(int x)
{
	stack_ptr = a;

	int f = 0;
	while(*stack_ptr)
	{
		if(*stack_ptr == x)
		{
			f = 1;
			*stack_ptr = *(stack_ptr+1);
		}
		if(f)
		{
			*stack_ptr = *(stack_ptr+1);
		}
			stack_ptr++;
	}
	if(f)
	{
		stack_ptr = '\0';
	}
}
int main()
{
	
	stack_ptr = (int*)malloc(sizeof(int)*20);



	initialize(4);

	printf("last element : %d\n",peek());
	printf("third element : %d\n",third());
	printf("bottom element : %d\n",bottom());

	remove1(2);

	
	printf("\n-------------------\n");
	display();
}