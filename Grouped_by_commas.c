https://www.codewars.com/kata/5274e122fc75c0943d000148

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 14
void reverse(char *p)
{
    char mus[SIZE];
    int count = SIZE - 1;
    while(isdigit(*(p + (--count))) == 0){}
    for(int i = 0, j = count; i < SIZE; i++, j--)
    {
        mus[i] = *(p + j);
        if(isdigit(mus[i]) == 0 && mus[i] != ',')
        {
            mus[i] = '\0';
            break;
        }
    }
    for(int i = 0; (*(p + i) = mus[i]) != '\0'; i++){}
}

int filling_the_buffer(int n, char *p)
{ 
  int k = n;
  if(n / 10 == 0)
  {
    *p = (n % 10) + '0';
    return n;
  }
  n /= 10; 
  p++;
  n = filling_the_buffer(n, p);
  *(p - 1) = (k % 10) + '0';
  return k;
}

char *group_by_commas(int n)
{
    char *buffer_with_comma = (char*)malloc(SIZE * sizeof(char));
    char *buffer = (char*)malloc(10 * sizeof(char));
    n = filling_the_buffer(n, &buffer[0]);
    for(int i = 1, j = 1; j <= 10; i++, j++)
    {
        if(i % 4 == 0 && isdigit(buffer[j - 1]))
        {
            buffer_with_comma[(i++) - 1] = ',';
        }
        buffer_with_comma[i - 1] = buffer[j - 1];
    }
    reverse(&buffer_with_comma[0]);
    return  &buffer_with_comma[0];
}
