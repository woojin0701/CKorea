#include <stdio.h>

#define SUBWAY_LENGTH 4     		// SUBWAY_LENGTH ��� ���� 4�� ��ȯ�� (ġȯ)

int main2()
{
	int subway[4] = {0, 0, 0, 0};			// ��ǻ�ʹ� 0���� ��, ����� �Ϲ������� 1���� ��

	// 1��ĭ�� 3��
	subway[0] = 3;
	
	// 2��ĭ�� 2��
	subway[1] = 2;

	// 3��ĭ�� 1��
	subway[2] = 1;

	// 4��ĭ�� 2��
	subway[3] = 2;

	// 3��ĭ�� 3���� �߰��� ž��
	// int subway3 = 1;
	// subway3 += 3;
	subway[2] += 3;				// subway{3,2,4,2}
	int sum = 0;



	// �� ĭ�� �ο��� ��ü �ο��� ���
	for (int i = 0; i < SUBWAY_LENGTH; i++)			// 0, 1, 2, 3 < 4���� �ݺ�
	{
		printf("%d��° ĭ���� %d�� \n", i, subway[i]);				// subway[0],subway[1],subway[2],subway[3]
		sum += subway[i];
	}

	printf("�� �ο��� %d�� \n", sum);

	return 0;
}