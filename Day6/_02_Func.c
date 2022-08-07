#include <stdio.h>

// Plus : 숫자 2개 더하기

int Plus(int num1, int num2) {
	return num1 + num2;
	
}

// Minus : 숫자 2개 빼기

int Minus(int num3, int num4) {
	return num3 - num4;
	
}
// Mul : 숫자 2개 

int Mul(int num5, int num6) {
	return num5 * num6;
	
}
// Div : 숫자 2개 나누기

float Div(int num7, int num8) {
	float result = (float)num7 / num8;			// 정수끼리 나누면 정수 결과가 나오기 때문에 하나를 실수로 바꿔줌
	return result;
}

// float : 실수
// double : 실수


int main2() {

	int Plus_result = 0;
	int Minus_result = 0;
	int Mul_result = 0;
	float Div_result = 0;


	//함수사용
	Plus_result = Plus(5, 3);

	Minus_result = Minus(5, 3);

	Mul_result = Mul(5, 3);

	Div_result = Div(5, 3);


	//
	printf("%d \n", Plus_result);
	printf("%d \n", Minus_result);
	printf("%d \n", Mul_result);
	printf("%f \n", Div_result);


	return 0;
}

