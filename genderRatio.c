#include <stdio.h>

int main(void)
{
    int man, woman;
    scanf("%d %d", &man, &woman);
    //input  man = a;
    //input woman =b;
     
    //double manRatio = 1.0 * man / (man + woman) * 100  ;
    //double womanRatio = 1.0 * woman / (man + woman) *100;
    double manRatio = (double)man / (man + woman) *100;
    double womanRatio = (double)woman / (man + woman) * 100;
     
     printf("manRatio: %.2f%%\twomanRatio: %.2f%%\n", manRatio, womanRatio);
    return 0;
}
