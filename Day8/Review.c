#include <stdio.h>

int main0() 
{
	// 배열 : 변수를 여러개 만들기보단 묶음으로 만들어서 관리 (반복문 사용 가능) 

	// 정수배열 변수

	int num[10] = { 0,0,0,0,0,0,0,0,0,0 };
	num[0] = 1;			// 첫번째 방
	num[1] = 10;			// 두번째 방
	num[2] = 100;			// 세번째 방

	// 일반변수 여러개는 반복문 사용이 불가능 하지만
	// 배열로 만들면 반복문을 통해 모두 사용이 가능하다
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", num[i]);
	}

	// 문자배열 변수 
	char str[10] = "hello";
	for (int i = 0; i < 10; i++)
	{
		printf("%c \n", str[i]);
	}

	// 배열은 시작위치를 기억해서 한칸씩 이동하며 사용한다.
	str[0];			// 첫번째 방의 위치를 기억해서 나열함	
	num[0];			// 첫번째 방의 위치를 통해 사용 +1 +2 +3



	// 포인터 : 변수의 주소(위치)를 기억하는 기술
	// 일반변수 : 값을 기억(저장)
	int* pnum = &num;
	printf("배열의 이름 : %d \n", num);
	printf("변수의 주소 : %d \n", pnum);
	printf("0번째 방 : %d \n", num[0]);
	printf("역참조값 : % d \n", *pnum);

	printf("1번째 방 : %d \n", num[1]);
	printf("주소값에 +1한다음 역참조 : %d \n",  *(pnum+1));

	// 문자배열 (문자열)

	char msg[] = "안녕하세요";			// 11
	char* msg2 = "안녕하세요";			// 11

	printf("%s \n", msg);
	printf("%s \n", msg2);

	float f = 3.14f;
	float* fp;		// 포인터변수 선언
	fp = &f;			// 주소참조값 대입
	*fp;			// 역참조 (주소참조값의 값에 접근)
	*fp = 33.44f;			// 역참조를 해서 값을 대입
	
	printf("%f", f);

	return 0;
}