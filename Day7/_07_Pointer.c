#include <stdio.h>

void Swap
(int num1, int num2) 
{
	int backup = num1;		// num1�ȿ� ���� ����صд�.
	num1 = num2;			// num2�� ������ num1�� �����Ѵ�.
	num2 = backup;			// ����� ���� num2�� �ִ´�.

}

void Swap2(int* num1,int* num2) {
	
	*num1 -= 1;
	*num2 += 1;
}





int main7()
{
	int n1 = 3;
	int n2 = 2;
	printf("�ٲٱ� �� : %d, %d\n", n1, n2);

	// Swap�̶�� �Լ��� ���ؼ� n1�� n2�� ���� �ٲ��ְ� ����
	//Swap1(n1, n2);
	//int*  num1 = 0;
	Swap2(&n1,&n2 );		// �ּҰ��� �Ѱ���
	//int* num2;
	//num2 = &num1;
	//*num2;

	//num1 = 3;

	//int* num2 = 0;
	//Swap3(n1,n2);
	//int* num2;
	//num2 = &num1;
	//*num2;

	//num1 = 2;
	printf("�ٲ� �� : %d, %d\n", n1, n2);



	return 0;
} 

// only SW : ������ �ʿ� X (��, �� : Java, Python)
// HW + SW : ������ �ʿ� (�߿���, IOT : C���)