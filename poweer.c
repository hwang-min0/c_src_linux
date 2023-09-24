#include <stdio.h>

??? power(int base, int exponent)
{
   int result = 1;
   for (int I = 1; i <= exponent; ++1) {
       result *= base;   // result = result * base;
   }
   
   return result;

}

int main(void)
{
   for (int i = 9; i <= 32; ++i) {
       int result = power(2, 1);
       printf("2 power of %d = %d", i, result);
   }

  return 0;
}
