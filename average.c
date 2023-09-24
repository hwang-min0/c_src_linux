#include <stdio.h>

int main(void)
{
	int kor, eng, mat;
	printf("input kor eng mat : ");
	scanf("%d %d %d",&kor, &eng, &mat);
	 
	//double average = (kor + eng + mat) / 3;
	double average = (kor + eng + mat) / 3.0 ;
	
	printf("average: %.2f\n",average);
	return 0;
}
