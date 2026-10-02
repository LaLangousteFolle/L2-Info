#include <stdio.h>
char *Lire_Chaine(void)
{
  int i = 0;
  char *c;
  scanf("%c", c);
  while(c[i])
  {
    i++;
    scanf("%c", &c[i]);
    if (c[i] == 32)
    {
      c[i] = '\0';
    }
  }
  return(c);
}


int main(void){
  Lire_Chaine();
  return(0);
}
