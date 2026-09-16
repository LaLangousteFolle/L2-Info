#include <stdio.h>
#include <termios.h>
#include <unistd.h>

struct termios oldt, newt;

void no_buffer()
{
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;

  newt.c_lflag &=~(ICANON);
  newt.c_cc[VMIN] = 1;
  newt.c_cc[VTIME] =0;
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
}

void restaure()
{
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}

#ifdef Ex1
void  ex1(void)
{
  int nbL = 0;
  char c = getchar();
  while (c != '.')
  { 
    while (c != ' ' && c != '.')
    {
      if (c == 'L')
        nbL++;
      c = getchar();
    }
    c = getchar();
  }
  printf("%i",nbL);
}
#endif

#ifdef Ex2
//Ex 2
void ex2(void)
{
  int nbM = 0;
  char c = 0;
  while (c !='.')
  {
    while(c != ' '&& c != '.')
    {
      if (c == 'L')
      {
        c = getchar();
        if(c == 'E')
          nbM++;
        c = getchar();
      }
    }
    printf("%i", nbM);
  }
}
#endif

#ifdef Ex3
//Ex 3
void ex3(void)
{
  int nbM = 0;
  char c = 0;
  while(c != '.')
  {
    while(c != ' ' && c != '.')
    {
      if (c == 'L')
      {

        c = getchar();
        if (c =='E')
        {
          c = getchar();
          if (c == 'S')
            nbM++;
        }
      }
    }
  }
  printf("%i", nbM);
}
#endif

#ifdef Ex4
void ex4(void)
{
  int nbM = 0;
  char c = 0;
  while (c != '.')
  {
    if (c ==' ')
    {
      c = getchar();
      if (c == ' ')
        nbM++;
    }
    c = getchar();
  }
  printf("%i", nbM);
}
#endif

#ifdef Ex5
void ex5(void)
{
  char c = 0;
  int nbM = 0;
  while (c != '.')
  {
    while ((c >=97 && c <= 122) || (c >= 65 && c <= 90))
      c = getchar();
    nbM++;
  }
  printf("%i", nbM);
}
#endif

#ifdef Ex6 
void ex6(void)
{
  char c = 0;
  int nbM = 0;
  while (c != '.')
  {
    while (c != ' ' && c != '.')
    {
      if (c == 'L')
      {
        while (c != ' ' && c != '.')
          c = getchar();
        nbM++;
      }
      else
      while ( c != ' ' && c != '.')
        c = getchar();
    }
  }
  printf("%i", nbM);
}
#endif

#ifdef Ex7 
void ex7(void)
{
  char c = 0;
  int nbM = 0;

  while (c != '.')
  {
    while (c != ' ' && c != '.')
    {
      if (c == 'E')
      {
        c = getchar();
        if (c == ' ' || c == '.')
          nbM++;
      }
      else
      c = getchar();
    }
  }
  printf("%i", nbM);
}
#endif

#ifdef Ex8 
void ex8(void)
{
  char c = 0;
  int nbM = 0;
  while (c != '.')
  {
    while (c != ' ' && '.')
    {
      if (c == 'L')
      {
        c = getchar();
        if (c == 'E')
        {
          c = getchar();
          if (c == ' ' || c == '.')
              nbM++;
        }
      }
    }
  }
  printf("%i", nbM);
  printf("%i", c);
}
#endif

#ifdef Ex9 
void ex9(void)
{
  char c = 0;
  int nbM = 0;
  int state = 1;
  while (c != '.')
  {
    while(state != 4)
    {
      switch (state){
        case 1:
          switch (c)
          {
            case 'L': state = 2;
            case '.': state = 4;
            default: state = 1;
            break;
          }
          break;
        case 2:
          switch (c)
          {
            case 'E': state = 3;
            case '.': state = 4;
            default: state = 1;
            break;
          }
          break;
        case 3:
          switch(c)
          {
            case '.': nbM++;
            default: state 1;
          }
        case 4:
          switch(c)
          {
            case 
          }
    }
  }
  printf("%i", nbM);
}
#endif

#ifdef Ex10 
void ex10(void)
{
  char c = 0;
  int nbM = 0;
  char buff = c;

  while (c != '.')
  {
    buff = getchar();
    while (c != ' ' && c != '.')
    {
      if (c == buff)
      {
        c = getchar();
        if (c == ' ' || c == '.')
          nbM++;
      }
      c = getchar();
    }
  }
  printf("%i", nbM);
}
#endif

int main(void)
{
  no_buffer();
  ex2();
  return(0);
}
