//2024.06.19 코드로 2진법 10진법 16진법 작성해서 데이터로 넘겨주기

//2진수, 8진수, 16진수로 표현하는 법
//2진수 : "0b" 2진수로 표현 : 0b + 1010 => 10 (2진수로 10을 표현)
//8진수 : "0"  8진수로 표현
//10진수 : 기호를 쓰지 않아도 10진법으로 표현된다.
//16진수 : "0x"A

//printf로 8진수 표현 %o, 16진수 표현 %x

//float 실수, 소수점

//소수를 표현하는 방법
//첫번째 : 비트를 n:m으로 분할한 후, n만큼 정수로 사용하고, m만큼 소수 부분으로 사용하자
//문제점 : 소수를 자세히 표현하려면, 정수를 표현할 공간이 적어진다.
//소수를 직접 정수표현 방식으로 사용하지 말고, 2e-1, 2e-2 ,2e-3 자리수에 0또는 1 그값을 더해서 표현하는 방식을 도입
//고정 소수점 방식 (Fixed Point) : 정수를 표현하는 비트 수와 소수를 표현하는 비트 수를 고정시켜 표현하는 방식
//부동 소수점 방식(Float Point) : 소수를 표현하는 방식으로, 정수부분과 소수 부분의 비율에 따라 소수점을 출력하는 위치를 변경하는 방식

	//300.625를 실수로 표현해보기 0b1000000.101
	//6.625555555. . . 

//비트 표현 방식

//비트 부호 : &, |, ^, ~
//비트 이동(shift) 부호: >>,<<

//a & b : AND연산
//1 & 0 = 0;
//0 & 1 = 0;
//0 & 0 = 0;
//1 & 1 = 1;

//a | b : OR연산
//1 | 0 = 1;
//0 | 1 = 1;
//0 | 0 = 1;
//1 | 1 = 1;

//a ^ b : XOR연산
//0b1000
//0b1100
//0b0100

//a~ 반전 . 2의 보수 0b0001 => 0b1110
// int num;
// num = ~num // num 비트 반전 시킨다.

//비트 간의 이동 연산자
//8<<2;
//char 0b00000100 << 2
//	   0b00010000

//32>>3		0b00010000 >> 3		8<<2(2e2) = 4   -> 32
//			0b00000010			32>>3 -> 4


#include "lectures.h"

void lecture8()
{
	// 변수 이름 정수(int) a_num 선언한 후, 숫자 15를 넣어서 출력
	int a_num;
	a_num = 15;
	printf("a_num의 10진수 값, %d\n",a_num);
	a_num = 0b1111;
	printf("a_num의 2진수 값, %d\n", a_num);
	a_num = 017;
	printf("a_num의 8진수 값, %o\n", a_num);
	a_num = 0xf;
	printf("a_num의 16진수 값, %x\n", a_num);

	a_num = 0b1111;
	printf("a_num의 2진수 값을 2진수로 출력, %d\n", a_num);
	a_num = 017;
	printf("a_num의 8진수 값을 8진수로 출력, %o\n", a_num); // %o
	a_num = 0xf;
	printf("a_num의 16진수 값을 16진수로 출력, %x\n", a_num); // %x(소문자로 표현) %X(대문자로 표현)

	//문제 1. -255를 2진수로 표현해보자
	int b_num = -255; //	255를 2의 보수한 값
					  //	255를 2진법으로 표현 0b 00000000 00000000 00000000 11111111
					  //    255를 2의 보수  반전 0b 11111111 11111111 11111111 00000001
	b_num = 0b11111111111111111111111100000001;
	printf("b_num의 값, %d\n", b_num);

	float a_float;
	a_float = 0.25;
	printf("a_float 출력 : %f\n", a_float);

	//0.1 + 0.2가 0.3과 같은지 관계 연산자로 표현을 해보세요
	//true면 1을 출력 false면 0을 출력합니다.
	//int Bool; 정수 선언

	printf("부동소수점의 에러\n");
	int Bool = (0.1 + 0.2) == 0.3; // 0.1 + 0.2의 값이 0.3이 아니다
	printf("참이면 1 거짓이면 0을 출력합니다, %d\n", Bool);

	double c_num = 0.0;

	for (int number = 0; number < 30; number++)
		c_num += 0.1;

	printf("c_num에 0.1을 30번 더한 값이 무엇인가요? : %f\n", c_num);

	printf("비트 연산 문제\n");
	//두 개의 정수 변수에 2진수로 표현된 값이. d와 e의 비트 연산 결과를 기호를 사용하지 않고 출력해보세요.
	int d_num = 0b0001111;
	int e_num = 0b0010010;
	int my_int = 0b00000010;
	int result = d_num & e_num;
	printf("내가 계산한 값 = %d", result);

	d_num = 0b0001111;
	e_num = 0b0010010;
	my_int = 0b00;
	result = d_num | e_num;
	printf("내가 계산한 값 = %d\n", result);

	d_num = 0b0001111;
	e_num = 0b0010010;
	my_int = 0b00;
	result = d_num ^ e_num;
	printf("내가 계산한 값 = %d\n", result);

	char overFlowedValue = 0b01000000;
	overFlowedValue << 2;
	printf("내가 계산한 값 = %d\n", overFlowedValue);

	overFlowedValue = 0b00000100;
	overFlowedValue << 5;
	printf("내가 계산한 값 = %d\n", overFlowedValue);

	//10진수 하나 입력 받아서, 해당 수의 2의 보수 값을 출력하는 코드를 작성해 보세요
	int twoComplement;
	printf("10진수 값 하나를 입력하세요:");
	scanf_s("%d", &twoComplement);
	twoComplement = ~twoComplement;
	printf("2의 보수의 값을 출력 : %d\n", twoComplement);

	//시프트 연산
	//10진수 하나 입력 받아서, 해당 수에 8을 곱한후 32로 나누는 코드를 x,/없이 작성해보세요
	//8과 32가 반드시 코드에 들어가도록. 비트 연산자 (<<,>>) 사용할 것
	int shiftNum;
	printf("10진수 값 하나를 입력하세요:");
	scanf_s("%d", &shiftNum);
	printf("8을 곱한 후 32로 나눈 결과:%d", shiftNum);
}