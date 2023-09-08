typedef unsigned long long ull;

ull even_fib(ull limit) 
{
  ull next, result, previous;
  next = result = previous = 0;
  ull current = 1;
  while(1)
  {
    next = previous + current;
    previous = current;
    current = next;
    if(next >= limit)
      return result;
    result += next % 2 == 0?next:0;
  }
}