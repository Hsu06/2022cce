#include <stdio.h>
int main()
{ int s;
  char g;
  scanf("%d",&s);
  printf("%d : ",s);
  switch(s/10)
{ case 10:
     g='A';
     break;
  case 9:
     g='A';
     break;
  case 8:
     g='B';
     break;
  case 7:
     g='C';
     break;
  case 6:
     g='D';
     default:
     g='E';
     }
     printf("%c\n",g);
}
