char *STRncat(char  *a, char *b, int n)
{
  int i;
  int j;

  i = 0;
  j = 0;

  while(a[i])
  {
    i++
  }
  while (b[j] && j < n)
  {
    a[i+j] = b[j];
    j++;
  }
  a[i+j] = '\0';
  return(a);
}


int main (void)
{
  return(0);
}
