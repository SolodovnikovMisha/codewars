// https://www.codewars.com/kata/5a25ac6ac5e284cfbe000111
char triangle(const char *clrs)
{
  int size_of_clrs = 0;
  while(*(clrs + size_of_clrs) != '\0')
    { size_of_clrs++; }
  char buffer[size_of_clrs][size_of_clrs];
  for(int j = 0; j < size_of_clrs; j++)
  {
    buffer[0][j] = clrs[j];
  }
  int lower = 0;
  int higher = size_of_clrs;
  int count_of_line = 0;
  while(lower < higher)
  {
    for(int j = lower; j < higher - 1; j++)
    {
      if(buffer[count_of_line][j] == 'G' && buffer[count_of_line][j + 1] == 'G')
      {
        buffer[count_of_line + 1][j] = 'G';
      }
      else if(buffer[count_of_line][j] == 'R' && buffer[count_of_line][j + 1] == 'R')
      {
        buffer[count_of_line + 1][j] = 'R';
      }
      else if(buffer[count_of_line][j] == 'B' && buffer[count_of_line][j + 1] == 'B')
      {
        buffer[count_of_line + 1][j] = 'B';
      }
      else if((buffer[count_of_line][j] == 'B' && buffer[count_of_line][j + 1] == 'G')||(buffer[count_of_line][j] == 'G' && buffer[count_of_line][j + 1] == 'B'))
      {
        buffer[count_of_line + 1][j] = 'R';
      }
      else if((buffer[count_of_line][j] == 'R' && buffer[count_of_line][j + 1] == 'G')||(buffer[count_of_line][j] == 'G' && buffer[count_of_line][j + 1] == 'R'))
      {
        buffer[count_of_line + 1][j] = 'B';
      }
      else
      {
        buffer[count_of_line + 1][j] = 'G';
      }
    }
    higher--;
    count_of_line++;
  }
    return buffer[size_of_clrs - 1][0];
}