#include <stdio.h>

void main5() {
	//while, for �ݺ���

	int flag = 0;		// 1
	while (flag < 5) {		// 2
		printf("flag : %d \n", flag);
		flag++;			// 3
	}
	
	for (int i = 0; i < 5; i++) {			// 1,2,3
		printf("i : %d \n", i);
	}


	// for(�ʱⰪ; ����; ����){ �ݺ������� ����; }
	
	for (size_t i = 0; i < 5; i++)
	{
		printf("������ %d \n", i);
	}









	








}