#include <stdio.h>

void main6() {
	// if : ������ ���ϴ� ��
	// switch : ��ġ�ϴ� ��

	// ���� ����
	// 1.���� 2.��� 3.������ 4.����
	int choice;
	printf("���� �ൿ�� �ұ��?");
	scanf("%d", &choice);
	switch (choice) {					// ()�ȿ��� �� ����
	case 1:
		printf("������ �ߴ�\n");
		break;
	case 2:
		printf("�� �ߴ�\n");
		break;
	case 3:
		printf("�������� ����ߴ�\n");
		break;
	case 4:
		printf("������ �ƴ�\n");
		break;
	default:
		printf("�߸� �����߽��ϴ�");

	}
}

// ���ǹ� : if~else if~eiae, switch~case~break