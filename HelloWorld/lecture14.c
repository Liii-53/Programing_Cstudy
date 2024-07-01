//2024.07.01 함수

//왜 함수를 써야 하는가?

//C언어는 절차(procedual) 지향(orient) 프로그래밍 언어.
//절차 = 함수. C언어. 함수를 지향하는 언어.

//1. Main 함수에 시작되는 프로그래밍에 코드 내용이 길어질수록
//코드를 파악하기 힘들고, 기능 유지 보수가 힘들어지고, 반복적인 코드가 계속 발생

//함수를 사용해서.
// - 코드를 파악하기 쉽게 만든다.
// - 유지 보수를 쉽게 만든다.
// - 반복적인 코드를 줄인다.

//함수의 선언
//반환값이 있는지 없는지
//매개변수가 있는지 없는지

//(반환하고 싶은 데이터 형식)(함수의 이름)( ) : 함수의 선언
//{
//		함수의 본체;
//}

//유형 1. 반환 값이 있고 매개변수도 있는 함수
int AddTwoNumber(int a, int b)
{
	int result = a + b;
	//함수의 목표를 원래 위치로 반환하는 방법 : return을 사용한다
	printf("a의 값 : %d\n", a);
	return result;
}

//유형 2. 반환값도 없고 매개변수도 없는 함수
void ShowResult(void)
{
	printf("걸과를 출력하겠습니다.");
	printf("게임을 종료합니다.\n");
}

//유형 3. 반환값이 없고 매개변수는 있는 함수
void ChangeResult(int result)
{
	printf("결과가 변경 되었습니다. %d\n", result);
}

//유형 4. 반환값이 있고 매개변수는 없는 함수
int InputNumber()
{
	int number;
	scanf_s("%d", &number);
	return number;
}

#include "lectures.h"

void lecture14() //함수의 선언
{
	int a = 5 + 1;
	//printf("%d\n", a);
	a = AddTwoNumber(5, 6);
	//printf("%d", a);
	ShowResult();
	ChangeResult(a);
	int c = InputNumber();
	printf("%d값 출력\n", c);
	
}