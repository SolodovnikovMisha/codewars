// https://www.codewars.com/kata/583710ccaa6717322c000105
int simple_multiplication(int number) 
{
  return number % 2 == 1?number * 9:number * 8;
}
// Второй вариант программы
int simple_multiplication(int number) 
{
  number <<= 3;
  return number += ((number>>3)%2 == 1?number>>3:0);
}
