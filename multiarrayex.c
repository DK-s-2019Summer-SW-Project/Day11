// ���� ȣ���� �����ϴ� ������ ���� �� ���
#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int villa[4][2];
	int popu, i, j;

// 2���� �迭�� ����̱� ������ for���� ��ø��Ű�� ���� �Ϲ����̰� �� ���� ����.

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%dfloor room%d population: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}



// ���� �α��� ����ϱ� ���� for���̴�. 
	for (i = 0; i < 4; i++)
	{
		popu = 0; // -> �ϴ� 0���� �ʱ�ȭ
		popu += villa[i][0]; // �迭 
		popu += villa[i][1]; // �迭
		// ���� ������ �迭�� ���� ���� �� ���� ���� ���ϴ� ����̴�! �迭�� �þ ��� ���� ���� ���������ָ� �ȴ�. 
		printf("foor%d popu: %d\n", i + 1, popu);
	}



	return 0;
}