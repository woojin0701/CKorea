#include <stdio.h>

void main2() {
	int 숫자;				// %d
	char 문자;				// %c
	char 문자열[100];		// %s
	float 실수;				// %f

	int num = 0;
	char 문자열1[100];

	// 입력
	printf("글자를 입력하세요.>>");
	scanf("%s", &문자열);
	printf("내가 입력한 글자는 : %s \n", 문자열);

	printf("숫자를 입력하세요.>>");
	scanf("%d", &숫자);
	printf("내가 입력한 숫자는 : %d \n", 숫자);
	
	printf("실수를 입력하세요.>>");
	scanf("%f", &실수);
	printf("내가 입력한 실수는 : %f \n", 실수);
	
	

	
	//출력
	printf("%s \n", 문자열);
	printf("%d \n", 숫자);
	printf("%f \n", 실수);


}