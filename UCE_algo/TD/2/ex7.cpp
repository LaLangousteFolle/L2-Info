int STRcmp(char *a, char *b)
{
  int i;

  i = 0;
  while(a[i] && b[i])
  {
    if (a[i]=='\0' && a[i] != '\0')
      return(-1);
    if (a[i]!=b[i])    
      return(a[i]-b[i]);
    i++;
  }
  return(0);
}

int main(void)
{
  return(0);
}
