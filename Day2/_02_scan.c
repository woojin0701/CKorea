#include <stdio.h>

void main2() {
	int ����;				// %d
	char ����;				// %c
	char ���ڿ�[100];		// %s
	float �Ǽ�;				// %f

	int num = 0;
	char ���ڿ�1[100];

	// �Է�
	printf("���ڸ� �Է��ϼ���.>>");
	scanf("%s", &���ڿ�);
	printf("���� �Է��� ���ڴ� : %s \n", ���ڿ�);

	printf("���ڸ� �Է��ϼ���.>>");
	scanf("%d", &����);
	printf("���� �Է��� ���ڴ� : %d \n", ����);
	
	printf("�Ǽ��� �Է��ϼ���.>>");
	scanf("%f", &�Ǽ�);
	printf("���� �Է��� �Ǽ��� : %f \n", �Ǽ�);
	
	

	
	//���
	printf("%s \n", ���ڿ�);
	printf("%d \n", ����);
	printf("%f \n", �Ǽ�);


}