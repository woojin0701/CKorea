#include <stdio.h>

void main3() {
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	char name[50];
	// 학습지 사칙연산
	// 이름을 입력하세요 (출력)
	
	printf("이름을 입력하세요. :");
	scanf("%s", &name);

	// 1+1
	printf("1+1=");
	scanf("%d", &num1);
	
	// 2-1
	printf("2-1=");
	scanf("%d", &num2);
	
	// 3*3
	printf("3×3=");
	scanf("%d", &num3);

	// 10/2
	printf("10÷2=");
	scanf("%d", &num4);




	printf("답 \n");
	printf("1+1=%d \n", num1);
	printf("2-1=%d \n", num2);
	printf("3×3=%d \n", num3);
	printf("10÷2=%d \n", num4);

	// +, -, ×, ÷					// ㄷ하고 한자키
	// 대입 =
	// % 나머지 구하기

}