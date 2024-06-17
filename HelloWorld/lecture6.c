/*2024.06.17 디버깅*/
//디버깅
//* 디버깅을 해야하는 이유
//* 프로그래밍을 하면서 작성한 논리적인 문제를 해결하기 위해서
//* 문제가 의심가는 부분에 코드의 중단점을 생성하고 실제로 컴퓨터의 계산결과를 눈으로 확인할 수 있다.
//* 문제를 해결 하기 위한 방법이다 (with Computer Debuging System)

//Operator 연산자
//대입, 산술 연산자
//'=' '-' '+' '*' '/' '%'
//int num = 30; //  Left Value = Right Value; 오른쪽 값을 왼쪽 변수에 대입한다
// 결합 순서가 (a <- b) 정해져있다.

//복합 대입 연산자
//종류 : a = a + b; a += b;
//		 a = a - b; a -= b;
//		 a = a * b; a *= b;
//		 a = a >> b; a >>= b;
//		 a = a & b; a &= b;
//		 a = a | b; a |= b;

//증가, 감소 연산자
// num;
// num++;
// ++num;
// num--;
// --num;
// ++ : 변수 +=1과 같은 뜻
// -- : 변수 -=1과 같은 뜻
//전위 증가 : 변수에 1을 먼저 더해준 후, 문장의 연산을 진행한다.
//후위 증가 : 문장의 연산을 먼저 진행 후 변수의 값을 변화시킨다.

//관계 연산자
//비교 연산자 : 두 개의 값을 비교하여 그 관계를 표현하는 연산자
//a, b;
//a = 10, b = 12
//결과 값이 True(참), False(거짓)으로 나옵니다.
//True : 1, False : 0
//result = (a < b);
// result의 값이 true면 1이 false면 0이 나온다.

//논리 연산자
//AND, OR, NOT
//AND : && (shift + 7) -> A와 B가 모두 참이면 결과를 참"1"으로 반환한다
//OR : || (shift + $) -> A와 B중 하나라도 참이면 결과를 참"1"으로 반환한다
//NOT : ! 변수 -> A가 True면 False를 반환, False면 True를 반환한다

//연산 결합 순위
//int A = (a == 10 && b == 12);
//int B = (a< 12 || b > 12);
//int c = !a;

#include "lectures.h"

void lecture6()
{

	printf("디버깅 예제 문제\n");
	char a, b, c;
	a = 100;
	b = 300;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	printf("연산자 예제 문제\n");
	//9+2=11, 9-2=7;

	int num1;
	int num2;
	int num3;
	int r;
	int r2;
	r2 = 0;

	printf("num1의 값을 입력 :");
	scanf_s(" %d,", &num1);
	printf("num2의 값을 입력 :");
	scanf_s(" %d,", &num2);
	printf("num3의 값을 입력 :");
	scanf_s(" %d,", &num3);
	r = num1 * num2 + num3;
	printf("계산 결과(L-Value)= %d * %d + %d = %d\n", num1, num2, num3, r);

	printf("복합 대입 연산자(결과 %d += %d)\n", r2, num1);

	printf("증가, 감소 연산자 예제 문제\n");
	int n1 = 10;
	int n2 = (n1++) + 2;
	printf("n1의 값 : %d\n", n1);
	printf("n2의 값 : %d\n", n2);

	printf("결과 값 = %d)\n", num1 < num3);
	
	printf("연산자 우선 순위 마지막 예제\n");
	//문제 : 변수 A의 값은 3 + 4 x 5이며, 변수 B의 값은 7 / 3 % 2이다.
	//변수 A와 B의 값을 비교한 값을 Result 변수에 대입하여 출력하여 보세요.

	int variableA;//3 + 4 x 5
	int variableB;//7 / 3 % 2
	int final;//variableA와 variableB를 관계연산자를 사용하여 Final 대입해보세요.


	int call1;
	int call2;
	int call3;

	printf("call1의 값을 입력 :");
	scanf_s(" %d,", &call1);
	printf("call2의 값을 입력 :");
	scanf_s(" %d,", &call2);
	printf("call3의 값을 입력 :");
	scanf_s(" %d,", &call3);

	variableA = call1 + call2 * call3;
	variableB = 7 / 3 % 2;
	final = (variableA < variableB);

	printf("variableA의 값은 %d 입니다.\n", variableA);
	printf("variableB의 값은 %d 입니다.\n", variableB);
	printf("final의 값은 %d 입니다.", final);
}