// 가로의 길이가 9 세로의 길이가 3인 int 형 2차원 배열을 선언하여 구구단 2~4단을 저장

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i, j;
	int arr[3][9] = 
	{
		{2,4,6,8,10,12,14,16,18},
		{3,6,9,12,15,18,21,24,27},
		{4,8,16,20,24,28,32,36}
	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
			printf("The arr is %d", arr[i][j]);
		printf("\n");
	}
		

	return 0;
}