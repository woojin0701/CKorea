#include <stdio.h>

void main2() {
	int age = 0;
	printf("���̸� �Է��ϼ��� >>>");
	scanf("%d", &age);

	// else if : if�� Ʋ������ �� ������ �˻��� if
	
	if (age < 10) {
		// ��� �Դϴ�.
		printf("��� �Դϴ�.\n");
	}

	else if (age < 20) {
		// 10���Դϴ�.
		printf("10���Դϴ�.\n");
	}

	else if (age < 30)	{		// ���� �ִ� if �� else  if�� ��� Ʋ���� ���� �˻� 
		// 20���Դϴ�.
		printf("20���Դϴ�.\n");
	}

	else if (age >= 30) {
		// 30���Դϴ�.
		printf("30���̻��Դϴ�.\n");
	}

}