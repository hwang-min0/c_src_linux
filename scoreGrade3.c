#include <stdio.h>

int main(void)
{
  int score;
  printf("input score: ");
  scanf("%d", &score);
  
/* char grade;
   // grade = 'A' or 'B' or 'C' or 'D' or 'F' 
  
  
  if (score >= 90){
  	grade = 'A';
  }else if(score >= 80 ){
  	grade = 'B';
  }else if(score >= 70){
   	grade = 'C';
  }else if(score >= 60){
  	grade = 'D';
  } else{
     grade = 'F';
  }
  printf("score : %d---grade : %c\n", score, grade);
*/
  
  switch (score/10){
  case 10: 
 //     printf("score : %d ---grade : A\n",score);
 //	break;
  case 9:
  	printf("score : %d ---grade : A\n",score);
 	break;
  case 8:
  	printf("score : %d ---grade : B\n",score);
  	break;
  case 7:
  	printf("score : %d ---grade : C\n",score);
  	break;
  case 6:
  	printf("score : %d ---grade : D\n",score);
  	break;
  default:  // 5 4 3 2 1 0
  	printf("score : %d ---grade : F\n",score);
 
   }
  return 0;
}
