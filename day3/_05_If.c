#include <stdio.h>

void main5() {
	// ���� ��� 
	// ���� : 90�̻��̸� A, 80�̻��̸� B, 70�̻��̸� C, 70�̸��̸� D
	char grade;				// ���
	int score;				// ����

	// ������ �Է¹ް�

	// ������ ���� ����� �˷��ּ���
	// 85��,B���
	printf("������ �Է��ϼ��� >>>");
	scanf("%d", &score);

	if (score >= 90) {
		grade = 'A';
		printf("90�� �̻��̸� %c ��� �Դϴ�.\n", grade);
	}
	else if (score >= 80) {
		grade = 'B';
		printf("80�� �̻��̸� %c ��� �Դϴ�.\n", grade);
	}
	else if (score >= 70) {
		grade = 'C';
		printf("70�� �̻��̸� %c ��� �Դϴ�.\n", grade);
	}
	else if (score < 70) {
		grade = 'D';
		printf("70�� �̸��̸� %c ��� �Դϴ�.\n", grade);
	}
		



	/*
	 scanf("%d", &score);

	 if (score >= 90) {
		grade = 'A';
	 }
	 else if (score >= 80) {
		grade = 'B';
	 }
	 else if (score >= 70) {
		grade = 'C';
	 }
	 else  {
		grade = 'D';
	 }
	 */
}