char *STRcpy(char *a, char *b)
{
  int i = 0;
  while(a[i])
  {
    a[i] = b[i];
    i++;
  }
  return(a);
}

int main(void)
{
  return(0);
}
