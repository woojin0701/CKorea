#include <stdio.h>

int main() 
{
	char 문자 = 'a';		// 값 대입
	char* 문자_위치 = &문자;				// 문자 변수의 위치가 담김

	int 정수 = 3;				// 정수값 대입
	int* 정수_위치 = &정수;				// 정수변수의 위치를 대입

	float 실수 = 3.14f;					// 3.14 대입
	float* 실수_위치 = &실수;			// 실수변수의 위치를 대입

	정수 = 4;
	printf("%d \n", 정수);			// 1

	*정수_위치 = 44;
	printf("%d \n", *정수_위치);			// 2	
	// 1과 2는 같음
	printf("%d \n", 정수);	// 44

	&실수 == 실수_위치;
	*&실수 == *실수_위치;









	return 0;
}