#include <stdio.h>

// Sum
void Sum(int num1, int num2){
	int result = num1 + num2;
	printf("%d \n", result);
}
// Sub
void Sub(int num3, int num4) {
	int result = num3 - num4;
	printf("%d \n", result);
}
// Mul
void Mul(int num5, int num6) {
	int result = num5 * num6;
	printf("%d \n", result);
}
// Div
void Div(int num7, int num8) {
	int result = num7 / num8;
	printf("%d \n", result);
}
// ���� 2���� �޾Ƽ� ���� �������� ����� ���ϱ� (���� : ���̳ʽ��� �÷����� �ٲ�)
void A(int num9, int num10) {
	int result = -num9 + num10;
	printf("%d \n", result);
}
// ���� 2���� �޾Ƽ� ���� �������� ����� ���� (���� : ���̳ʽ��� �÷����� �ٲ�)
void B(int num11, int num12) {
	int result = -num11 - -num12;
	printf("%d \n", result);
}


// C����� �������� main() �Լ��̴�.
int main() 
{
	Sum(2, 2);		// 4

	Sub(2, 2);		// 0

	Mul(2, 2);		// 4

	Div(2, 2);		// 1

	A(-3, 2);		// 5

	B(-5, -1);		// 4



	return 0;
}