#include <stdio.h>

void main7() {
	// +, - , *, / : ��Ģ����
	// = : ���Կ�����
	// �񱳿�����
	
	// ���� : ==
	// �ٸ��� : !=
	// ������ ũ�� : <
	// ������ �۴� : >
	// ������ ũ�ų� ���� : >=
	// ������ �۰ų� ���� : <=
	// �񱳿������� ����� Ʋ���� 0 ,������ 0 �ǿ��� ���� ���´�(��ǥ������ 1)
	int result1 = 1 == 2;	// Ʋ���� 0, ������ 1 (Ȥ�� 0 �̿��� ��)
	int result2 = 1 != 2;
	int result3 = 1 > 2;
	int result4 = 1 < 2;
	int result5 = 1 >= 1;
	int result6 = 1 <= 2;

	printf("%d \n", result1);
	printf("%d \n", result2);
	printf("%d \n", result3);
	printf("%d \n", result4);
	printf("%d \n", result5);
	printf("%d \n", result6);
	

}