#include <stdio.h>

// ����ü Human (�̸�, ����)
typedef struct Human {
	char name[16];
	int age;
}H;
// �Լ�1 Info(Human*) : �̸��� ���� ���
void Info(H* human) {
	printf("�̸� : %s, ���� : %d \n", human->name, human->age);
}

// �Լ�2 Modify(Human*) : scanf�� ���ؼ� ���̸� ����
void Modify(H* human) {
	printf("%d ���� �����ϱ�>>", human->age);
	scanf("%d", &(human->age));
	
}

int main() 
{
	H ������ = { "������",16 };
	Info(&������);
	Modify(&������);
	Info(&������);
	

	// ����ü���� �ʱ�ȭ

	//  �������

	// �����Լ�

	// ������� �Լ�


	return 0;
}