#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main6() {
	// for�� ����ؼ� 1~10���� ���
	// 1~10������ ��
	int �հ� = 0;		// 1, 3, 6, 10, ..., 55f

	for (size_t i = 0; i < 10; i++)
	{
		�հ� += (i + 1);
		printf("%d \n", i+1);
	}
	
	printf("%d \n", �հ�);

	// ���� �Է¹ް� �հ踦 ���ϼ���
	int b = 0;
	int sum = 0;
	printf("����� �� ���ұ�� ? ");
	scanf("%d", &b);
	for (int a = 0; a < b; a++) {
		sum += (b + 1);
		printf("%d \n", b + 1);
	}
	






	
	
}