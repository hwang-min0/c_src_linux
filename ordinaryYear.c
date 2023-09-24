#include <stdio.h>

int main(void)
{
  int year;is
  printf("input year : ");
  scanf("%d", &year);
  
  //int isOrdinary = !((year % 4 ==0 && year % 100 !=0 )|| year % 400 == 0);
  int isOrdinary = year % 4 !=0 || year % 100 ==0 && year % 400 !=0;
  
  printf("%d is a Ordinary : %d\n", year, isOrdinary);
  
  return 0;
}
