// https://www.codewars.com/kata/578553c3a1b8d5c40300037c
#include <stddef.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count)
{
  unsigned result = 0;
  for(int i = 0; i < count; i++)
  {
    result <<= 1;
    result |= bits[i];
  }
  return result;
}
