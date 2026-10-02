char *STRcat(char *a, char *b)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (a[i])
  {
    i++;
  }
  while (b[j])
  {
    a [i+j] = b[j];
    j++;
  }
  a[i+j] = '\0';
  return(a);
}


int main(void)
{
  return(0);
}
