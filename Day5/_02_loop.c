#include <stdio.h>

void main2() {
	// �ݺ��� : while, for
	// �ݺ����� �����ϴ� ��ɾ� : break, continue
	// break : �ݺ��� ��� ����
	// continue : �ݺ��� ó������ ���ư��� (1ȸ�� ���)

	int flag = 0;
	while (1) {			// ������ �´�, 0: ������ Ʋ����
		flag++;
		printf("%d \n", flag);

		if (flag == 500) {			// falg�� 500 �϶�
			break;			// �ݺ��� ��� ����
		}
	}








}