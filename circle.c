#include <stdio.h>

int main(void)
{
	int radius;
	printf("input radius: ");
	scanf("%d", &radius);
	
	double area = 3.141392 * radius * radius;
	
	printf("area: %.2f\n", area);
	return 0;
}
