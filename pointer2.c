#include <stdio.h>

int main(void)
{
    
    int *p;
    p = NULL;
    
    int num;
    int nums[5];
    p = &num;
    *p = 100;
    
    printf("a : %d\n", *p);

   return 0;
}

