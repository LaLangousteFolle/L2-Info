char *STRncpy(char *a, char *b, int n)
{
  char buff = b[0];
  int size = 0;
  while(buff != '\0' && n > 0)
  {
    size++;
    a[n] = b[n]; 
  }
  a[i] = '\0';
  return(a);
}

int main(void)
{
  return(0);
}
