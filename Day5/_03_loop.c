#include <stdio.h>

void main3() {
	 // break : �ݺ��� ��� ���� 
	 // continue : �ݺ��� ó������ (1ȸ�� ���)
	
	 // for(�ʱⰪ;����;����){}
	 // 1. �ʱⰪ 2. ���� 3. {} 4. ����
	 // 5. ���� 6.{} 7. ����
	 // 8. ���� 9.{} 10. ����
	for (int i = 1; i < 11; i++) {
		if (i % 2 == 1) {
			continue;		// �ݺ��� ó������ 
		}
		printf("%d \n", i);

	}

	//int flag = 1;
	//while (flag < 11) {
	//	printf("%d \n", flag);
	//	flag++;
	//}
}