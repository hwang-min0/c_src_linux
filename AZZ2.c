#include <stdio.h>

int main(void)
{
  //int code;
  //printf("asc code : ");
  //scanf("%d", &code);

   char c;
   printf("input char : ");
   scanf("%c", &c);
     
  //printf( "%c\n", c); code, isTrue);
  int isTrue = (c>= 'A' && c <= 'Z');
  
  printf("%c is a big letter : %d\n", c, 
  
  isTrue);
  
  return 0;

}
