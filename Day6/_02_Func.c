#include <stdio.h>

// Plus : ���� 2�� ���ϱ�

int Plus(int num1, int num2) {
	return num1 + num2;
	
}

// Minus : ���� 2�� ����

int Minus(int num3, int num4) {
	return num3 - num4;
	
}
// Mul : ���� 2�� 

int Mul(int num5, int num6) {
	return num5 * num6;
	
}
// Div : ���� 2�� ������

float Div(int num7, int num8) {
	float result = (float)num7 / num8;			// �������� ������ ���� ����� ������ ������ �ϳ��� �Ǽ��� �ٲ���
	return result;
}

// float : �Ǽ�
// double : �Ǽ�


int main2() {

	int Plus_result = 0;
	int Minus_result = 0;
	int Mul_result = 0;
	float Div_result = 0;


	//�Լ����
	Plus_result = Plus(5, 3);

	Minus_result = Minus(5, 3);

	Mul_result = Mul(5, 3);

	Div_result = Div(5, 3);


	//
	printf("%d \n", Plus_result);
	printf("%d \n", Minus_result);
	printf("%d \n", Mul_result);
	printf("%f \n", Div_result);


	return 0;
}

