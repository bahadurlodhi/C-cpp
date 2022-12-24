// Write a c program to find smallest number 
#include <stdio.h>
int main()
{
  int array[100], size, c, location = 0;

  printf("Enter number of elements in array\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  for (c = 1; c < size; c++)
    if (array[c] < array[location])
      location = c;

  printf("Minimum element is present at location %d and its value is %d.\n", location+1, array[location]);
  return 0;
}