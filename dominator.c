//https://www.codewars.com/kata/559e10e2e162b69f750000b4
#include <stddef.h>

int dominator(const int *array, size_t n) 
{
  for(int i = 0; i < n; i++)
  {
    int number_of_equal_numbers = 0;
    for(int j = i; j < n; j++)
    {
      if(array[i] == array[j])
      {
        number_of_equal_numbers++;
      }
    }
    if(number_of_equal_numbers > n/2)
    {
      return array[i];
    }
  }
  return -1;
}
