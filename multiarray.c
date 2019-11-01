// 다차원 배열이란 2차원 이상의 배열을 의미한다. 
// 다차원 배열이란 1차원 배열의 연장선상에 놓여있다. 
// 2차원 배열 = 평면구조의 배열
// 3차원 베열 = 직육면체 구조의 배열
/*
 int arrOnwDime[10]; --> 길이가 10인 1차원 배열 
 int arrTwoDime[5][5]; --> 가로, 세로의 길이가 각각 5인 2차원 int형 배열
 int arrThreeDime[3][3][3]; --> 가로, 세로, 높이의 길이가 각각 3인 3차원 int형 배열 

*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
// The example of two demin arr
// TYPE arr[세로 길이] [가로 길이]
// sizeof를 이용하여 2차원 배열의 크기를 계산
int main()
{
	int arr1[3][4];
	int arr2[6][7];
	printf("세로3 가로4: %d\n", sizeof(arr1)); // 3*4*4
	printf("세로6 가로7: %d\n", sizeof(arr2)); // 6*7*4
	return 0;
}

// 2차원 배열의 메모리 할당 형태 

// 1차원 배열 : 0x100 , 0x1002... 
// 2차원 배열 : 0x12-0x24 , 0x12-0x25, ...  2차원 배열 디버깅 해보면 배열의 메모리 할당을 확인 할 수 있다. 

// 초기화와 동시에 배열 선언하기 

int main()
{
	int i, j;
	int arr[3][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)

			printf("%d", arr[i][j]);
		printf("\n");
	}
	return 0;
}