//2024.07.01 지역 변수와 전역 변수의 이해

//지역 변수(local variable) : 중괄호 내부에서 생성되는 변수. 지역변수는 선언된 지역 내에서만 유효하다.
 
//변수의 존재 기간 : 중괄호가 끝날 때 변수가 사라진다. 지역변수가 저장되는 공간을 스택이라고 한다.
//변수의 접근 범위 : 범위 밖에서 선언된 변수와 변수 범위 안에서 선언된 변수의 이름이 같을때 어떤 변수를 사용할까?

//같은 지역내에서 같은 이름의 변수를 선언 할 수 없다 - 컴파일러가 같은 이름의 변수에 대해서 어떤 변수를 사용해야 할지 모르기 때문

//범위가 다른 곳에서 같은 이름의 변수가 선언이 되었다면, 가장 가까운 범위의 변수를 사용한다.

//전역 변수(global variable) : 중괄호{} 밖에 선언된 변수

#include "lectures.h"

int count; // 전역 변수의 선언. 전역 변수는 선언시에 0으로 초기화 된다.

int SimpleFunc()
{
	count++;
	int num = 10;

	return num;
}

void Plus1(int a, int b)
{
	a++;
	b++;
	return a, b;
}

void lecture15()
{
	int num = 17;

	count = 10;
	printf("count의 값 : %d\n", count);

	SimpleFunc();
	printf("num의 값 : %d\n", num);
	printf("num의 값 : %d\n", count);

	int count1 = 4, count2 = 6;

	Plus1(count1, count2);

	printf("1의 값 : %d\n 2의 값 : %d \n", count1, count2);
}

