#include <stdio.h>

void main8() {
	int result6 = 3 - 5;
	printf("3-5=%d\n", result6);

	// 1+1
	// 2-1
	// 3*3
	// 10/2
	// 10.0/3,0

	int result1 = 1 + 1;
	int result2 = 2 - 1;
	int result3 = 3 * 3;
	int result4 = 10 / 2;
	float result5 = 10.0 / 3.0

		; printf("1+1=%d\n", result1);
		printf("2-1=%d\n", result2);
		printf("3*3=%d\n", result3);
		printf("10/2=%d\n", result4);
		printf("10.0/3.0=%f\n", result5);


		// % : ������ ���ϱ�
		int result9 = 10 % 3;			// == 1
		printf("10�� 3���� ���� �������� %d�̴�.\n", result9);

		// ����� ���ҋ�, Ȧ¦�� ������ ��
		// 3�� ��� == 3���� ���� �������� 0
		printf("3�� ����� %d�� 0�� ����.\n", result9);

		int num = 3;
		printf("num�� Ȧ���� 1, ¦���� 0 >> %d\n", num % 2);


}