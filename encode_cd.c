#include <stdlib.h>
#include <malloc.h>

//  return dynamically allocated C-string
//  output result will be freed by tester

const char *encode_cd(unsigned char n) 
{
  char buf[10] = "PPPPPPPPP";
  char *str = malloc(10);
  for(int i = 0; i < 9; i++)
  {
      if(n % 2 == 1 && buf[i] == 'P')
      {
        buf[i+1] = 'L';
      }
      if(n % 2 == 1 && buf[i] == 'L')
      {
        buf[i+1] = 'P';
      }
      buf[i+2] = buf[i+1];
      n/=2;
    *(str+i) = buf[i];
  }
  return str;
}