#include <stdio.h>
#include <time.h>
#include "rand.h"


int main(void)
{	
   my_srand( time(NULL));
	
	for (int i = 0; i <= 10; ++i)
	{
		int num = my_rand();
		printf("num : %d\n", num);	
	}	
 	return 0;
}



