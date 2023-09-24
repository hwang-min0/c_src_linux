#include <stdio.h>

int sumMatrix(const int (*Matrix)[4], int row, int col)
//int sumMatrix(int *Matrix[][4], int row, int col)

{
   int sum = 0;
   for (int i = 0; i < row; ++i){
        for (int j = 0; j < col; ++j) {
                 sum = sum +  Matrix[i][j];   // *(Matrix[i] + j) == *(*(Matrix + i ) + j)
                    }
   
   }
   return sum;
}

int main(void)
{
   int matrix[3][4] = {
         {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}
   };
   
   int sum = sumMatrix(Matrix, 3, 4);   // &Matrix[0]
   
   printf("sum : %d\n", sum);

   return 0;
}
