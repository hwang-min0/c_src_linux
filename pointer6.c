#include <stdio.h>

int main(void)
{
   void *p;
   
   int i = 100;
   p = &i;
   //*p = 200;   x
   *(int *)p = 200;
   
   printf("*i : %d\n", i);

  return 0;
  
}
