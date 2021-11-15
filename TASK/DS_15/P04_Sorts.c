
#include <stdio.h>
#include <stdlib.h>

int a1[] = {2,3,1,4,5};
int a2[] = {2,3,1,4,5};
int a3[] = {2,3,1,4,5};

 
int n=5;
void swap(int *p,int *q)
{
    *p = *p+*q;
    *q = *p-*q;
    *p = *p-*q;
    //  
}
void printArray(int arr[])
{
    int i;
    for (i = 0; i < n; i++)
        printf(" %d ",arr[i]);
    printf("\n");
}
void bubbleSort(int arr[])
{
    int i, j;
    for (i = 0; i < n-1; i++)    
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
            
        }
        
    }
}


void merge(int a[],int low,int mid ,int high)
{
	int b[20];  
	int i,j,k;
	i=low,j=mid+1,k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		    b[k++]=a[i++];
		else
		   b[k++]=a[j++];   
	}
	while (i<=mid)
		b[k++]=a[i++];
	while 
		(j<=high) b[k++]=a[j++];
		for (k=low;k<=high;k++)
	        a[k]=b[k];
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low>=high)
	  return;
	mid=(low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);
}
void quicksort(int a[],int first,int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<last)
            {
                i++;
            }
            while(a[j]>a[pivot])
            {
                j--;
            }
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quicksort(a,0,j-1);
        quicksort(a,j+1,last);
    }
}
int main()
{
    printf("Buble sort : --------\n");
    bubbleSort(a1);
    printArray(a1);   

    printf("Merge sort : ---------\n");
    mergesort(a2,0,n-1);
    printArray(a2);  
    
    printf("Quick Sort : --------\n");
    quicksort(a3,0,n-1);
    printArray(a3);
    }
