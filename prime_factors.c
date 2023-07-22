#include <math.h> 

int prime_factors (unsigned long long n, unsigned long long factors[])
{
  int j = 0;
  for(unsigned long long i = 2; i <= sqrt(n); i++)
  {    
    while(n % i == 0)
    {
      factors[j++] = i;
      n /= i;
    } 
  }
  if(n != 1 )
  {
    factors[j++] = n;
  }
	return j;
}