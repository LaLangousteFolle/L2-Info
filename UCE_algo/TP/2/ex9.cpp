char *STRstr(char *a, char *b)
{
  int i = 0;
  while(a[i])
  {
    while(a[i] == b[i] && a[i] && b[i])
    {
      i++;
    }
    i++;
  }
}

int main (void)
{
  return(0);
}
