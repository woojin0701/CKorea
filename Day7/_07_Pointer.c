#include <stdio.h>

void Swap
(int num1, int num2) 
{
	int backup = num1;		// num1안에 값을 백업해둔다.
	num1 = num2;			// num2의 값으로 num1에 저장한다.
	num2 = backup;			// 백업된 값을 num2에 넣는다.

}

void Swap2(int* num1,int* num2) {
	
	*num1 -= 1;
	*num2 += 1;
}





int main7()
{
	int n1 = 3;
	int n2 = 2;
	printf("바꾸기 전 : %d, %d\n", n1, n2);

	// Swap이라는 함수를 통해서 n1과 n2의 값을 바꿔주고 싶음
	//Swap1(n1, n2);
	//int*  num1 = 0;
	Swap2(&n1,&n2 );		// 주소값을 넘겨줌
	//int* num2;
	//num2 = &num1;
	//*num2;

	//num1 = 3;

	//int* num2 = 0;
	//Swap3(n1,n2);
	//int* num2;
	//num2 = &num1;
	//*num2;

	//num1 = 2;
	printf("바꾼 후 : %d, %d\n", n1, n2);



	return 0;
} 

// only SW : 포인터 필요 X (웹, 앱 : Java, Python)
// HW + SW : 포인터 필요 (펌웨어, IOT : C언어)