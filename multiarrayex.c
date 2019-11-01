// 빌라 호수에 거주하는 사랃들의 저장 및 출력
#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int villa[4][2];
	int popu, i, j;

// 2차원 배열의 계산이기 떄문에 for문을 중첩시키는 것이 일반적이고 또 가장 쉽다.

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%dfloor room%d population: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}



// 층별 인구를 출력하기 위한 for문이다. 
	for (i = 0; i < 4; i++)
	{
		popu = 0; // -> 일단 0으로 초기화
		popu += villa[i][0]; // 배열 
		popu += villa[i][1]; // 배열
		// 위의 공식은 배열을 증가 시켜 그 안의 값을 구하는 방법이다! 배열이 늘어날 경우 위의 값을 증가시켜주면 된다. 
		printf("foor%d popu: %d\n", i + 1, popu);
	}



	return 0;
}