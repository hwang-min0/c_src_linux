#include "board.h"

int main(void)
{
	setScore(1, 1, 5);
	setScore(5, 1, 10);
	setScore(1, 1, 5);
	setScore(1, 1, 5);
	setScore(1, 1, 5);
	setScore(1, 1, 5);
	
	setFrameScore(1, 150);
	
	printBoard();

	return 0;
}
