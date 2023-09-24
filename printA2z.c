#include <stdio.h>

int main(void)
{
  char c = 'A';
  while (c <= 'Z'){
      printf("%c", c);
      ++c;
  }
  printf("\n");
  
  printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
 return 0;
}
