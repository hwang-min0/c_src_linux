#include <stdio.h>

int main(void)
{
  int num;
  printf("input num : ");
  scanf("%d", &num);
  
  //int isTrue = (1 <= num <= 10);
  //int isTrue = (num>= 1 && num <= 10);
  //printf("%d in [1, 10] : %d\n", num, isTrue);
  
  if (num >0){
      //positive
      printf("%d is a posiitive\n", num);
   } else if(num == 0){
      // zero
      printf("%d is a zero\n", num);
   }else {
         //negative
      printf("%d is a negative\n", num);
    }
    

 //   printf("%d is a %s|n", num, 
 // 		(num>0) ? "positive" : (num == 0 ) ? "zero" : "negative");
 
 return 0;
 }
