#include <stdio.h>

int main(){
	int T;
	int A;
	int B;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++){
		scanf("%d %d", &A, &B);
		printf("#case %d : %d", i+1, A+B);

	}
}

