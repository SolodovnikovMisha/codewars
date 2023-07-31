// https://www.codewars.com/kata/5949481f86420f59480000e7
#include <stddef.h>
#include <stdlib.h>

const char *odd_or_even(const int *v, size_t sz)
{
  int sum = 0;
  for(int i = 0; i < sz; i++)
  {
    sum += v[i];
  }
  return (abs(sum) % 2)? "odd": "even"; 
}
