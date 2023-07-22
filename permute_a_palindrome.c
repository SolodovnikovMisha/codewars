// https://www.codewars.com/kata/58ae6ae22c3aaafc58000079
#include <stdbool.h>

bool permute_a_palindrome(const char *str_in) 
{
  int count = 0;
  static int symbol_frequency[26];
  for(int i = 0; i < 26; i++)
    symbol_frequency[i] = 0;
  for(int i = 0; *(str_in + i) != '\0'; i++)
    symbol_frequency[*(str_in + i) - 'a']++;
  for(int i = 0; i < 26; i++)
    if(symbol_frequency[i] % 2 == 1)
      count++;
  return count<2?1:0;
}
