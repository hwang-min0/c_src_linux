#include <stdio.h>

int a;
int b;


void  swap (void)
{
   int tmp =a;
  	a = b;
  	b = tmp;
 } 	

int main(void)
{
   a = 100;
   b = 200;
   
   printf("a : %d b : %d\n", a, b);
   
   swap();
   
   printf("a : %d b : %d\n",cc a, b); 
  	
   return 0;
}
