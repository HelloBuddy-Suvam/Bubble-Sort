#include <stdio.h>

int main()
{
  int array[10], n=10, i, j, swap;

 /* Read array elements */

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

 for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1]) 
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }
  printf("Sorted list in ascending order:\n");

  for ( i = 0 ; i < n ; i++ )
     printf("%d\n", array[i]);

  return 0;
}

