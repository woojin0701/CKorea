#include <stdio.h>

// 구조체 Human (이름, 나이)
typedef struct Human {
	char name[16];
	int age;
}H;
// 함수1 Info(Human*) : 이름과 나이 출력
void Info(H* human) {
	printf("이름 : %s, 나이 : %d \n", human->name, human->age);
}

// 함수2 Modify(Human*) : scanf를 통해서 나이를 수정
void Modify(H* human) {
	printf("%d 나이 수정하기>>", human->age);
	scanf("%d", &(human->age));
	
}

int main() 
{
	H 남우진 = { "남우진",16 };
	Info(&남우진);
	Modify(&남우진);
	Info(&남우진);
	

	// 구조체변수 초기화

	//  정보출력

	// 수정함수

	// 정보출력 함수


	return 0;
}