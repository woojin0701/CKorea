#include <stdio.h>

void main() {
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	char name[50];
	// �н��� ��Ģ����
	// �̸��� �Է��ϼ��� (���)
	// d
	printf("�̸��� �Է��ϼ���. :");
	scanf("%s", &name);

	// 1+1
	printf("1+1=");
	scanf("%d", &num1);
	(2 == num1) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�. \n");

	// 2-1
	printf("2-1=");
	scanf("%d", &num2);
	(1 == num2) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�. \n");

	// 3*3
	printf("3��3=");
	scanf("%d", &num3);
	(9 == num3) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�. \n");

	// 10/2
	printf("10��2=");
	scanf("%d", &num4);
	(5 == num4) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�. \n");



	printf("�� \n");
	printf("1+1=%d \n", num1);
	printf("2-1=%d \n", num2);
	printf("3��3=%d \n", num3);
	printf("10��2=%d \n", num4);

}