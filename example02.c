// 서로 다른 배열의 초기화 

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{

	int arrA[2][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };
	int arrB[4][2];
	int i, j;

	/*The movement */
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arrB[j][i] = arrA[i][j];

	/*The output */
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%2d", arrB[i][j]);
		printf("\n");
	}



	return 0;
}