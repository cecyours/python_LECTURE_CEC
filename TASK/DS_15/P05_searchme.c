
#include <stdio.h>
int n;
void swap(int *p,int *q)
{
    *p = *p+*q;
    *q = *p-*q;
    *p = *p-*q;
    //  
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
int main()
{
  int c, first, last, middle, search, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter value to find\n");
  scanf("%d", &search);

 bubbleSort(array);
  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}