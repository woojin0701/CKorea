#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main7() {

	//for (int i = 1; i <= 9; i++)
	//{
	//	printf("2 �� %d = %d \n", i, 2 * i);
	//}
	
	int step = 0;
	printf("�� ���� ����ұ��?");
	scanf("%d", &step);

	for (int i = 1; i <= 9; i++) {

		printf("%d �� %d = %d\n", step, i, step * i);
	}





}