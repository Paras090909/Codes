#include<stdio.h>
int main ()
{
  int size, i, j, count=0;
  printf("\n enter the size of array\n");
  scanf("%d", &size);
  printf("\n enter %d elements in array\n", size);
  int arr[size];
  for ( i = 0; i < size; i++)
  {
  scanf("%d", &arr[i]);
  }
  
   for ( i = 0; i < size; i++)
     {
       for ( j = i+1; j < size; j++)
       {
        if( arr[i ] == arr[j])
        {
        count++;
        break;
        }
     }
     }
     printf("\n total duplicate elements in array is: %d", count);
     
     return 0;
     }
        