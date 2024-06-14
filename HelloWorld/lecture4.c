// (2024.06.13) 입력
// 학습목표 : scanf 함수의 실습
// 입력을 받아서 저장할 변수를 미리 선언
// 기본 사용법 : scanf("%d:, &변수의 이름);
//scanf_s("%d", &num);

#include "lectures.h"

void lecture4()
{
	printf("Hello World! 이것은 4강의 내용입니다.\n");

	int num;
	printf("num의 값을 입력하세요: ");
	scanf_s("%d", &num);
	printf("입력된 num의 값 : %d\n", num);

	/*
	(2024.06.13) 이스케이프 문자
	학습 목표 : 이스케이프 문자 사용
*/

		int money = 500;
		printf("\"지금 보유한 금액 : %d 원\" \n ", money);

		//약속된 규칙으로 문자 출력을 할 수 없는 문자들이 있다.
		//이러한 문자들을 출력하고 싶을 때 이스케이프 : '\'
		//\ + (약속된 문자) : 새로운 기능을 구현할 수 있다.
		// 종류 : \n, \a, \t, \b, \r, \\, \?, \", \'

		/*
			\n: 줄바꿈 new line
			\a: 경고음 alarm
			\t: 문자 사이에 공간을 생성한다 tab
			\b: 콘솔 커서를 한칸 뒤로 이동 시킨다 backspace
			\r:	마우스 커서를 해당 줄의 맨 처음으로 이동시킨다 return
			\\, \?, \:, \' : 시스템 약속상 출력할 수 없는 문자들을 출력하게 해준다
		*/

		printf("\a");
		printf("hello \b\b hi \n");
		printf("건강하세요\r안녕\n");
		printf("반갑 \t 습니다. \n");
		printf("\\ \' \" \? 에러가 발생하나요? \n");

		//변수를 이용한 데이터 저장
		//변수를 저장하는 다양한 방법
		//(1) 변수를 선언하고, 데이터를 할당
		int num1;
		num1 = 10;
		//(2) 변수 초기화. (선언과 할당)
		int num2 = 20;
		//(3) 변수를 동시에 선언(데이터 형태가 같을 것만)
		int num3, num4, num5;
		num3 = 10, num4 = 20, num5 = 30;
		printf("%d %d %d \n", num3, num4, num5);
		//(4) 변수를 동시에 선언과 함께 할당

		//변수 이름 작성 시 주의 사항(제한 사항)

		//변수의 이름이 숫자로 시작할 수 없다
		// 	int 775num;
		//#,$ 특수기호 이름을 사용할 수 없다
		// 	int #num;
		//문자 이름 사이에 띄어쓰기를 공백문자를 사용할 수 없다
		// 	int your function;
		//키워드를 이름으로 사용할 수 없다
		// int int;

		//변수 이름 알아보기 쉽게 지을 것


//변수의 이름 num1,num2,num3
//두개의 정수를 입력받아서 두 수의 뺄셈과 곱셈의 결과를 출력해 보세요
//세게의 정수를 입력받아소 num1 * num 2 + num3를 출력하는 코드를 작성해보세요
//두게의 정수를 입력받아서 몫과 나머지를 출력하는 코드를 작성보세요

		int firstnum1;
		int firstnum2;

		int secondnum1;
		int secondnum2;
		int secondnum3;

		int thirdnum1;
		int thirdnum2;

		int sub;
		int times;

		int fin;

		int devide;
		int left;

		//문제 1
		printf("첫번째 정수를 입력하세요: ");
		scanf_s("%d", &firstnum1);
		printf("두번째 정수를 입력하세요: ");
		scanf_s("%d", &firstnum2);

		sub = firstnum1 - firstnum2;
		times = firstnum1 * firstnum2;
		printf("두 수의 뺄셈 : %d\n", sub);
		printf("두 수의 곱셈 : %d\n", times);

		//문제 2
		printf("첫번째 정수를 입력하세요: ");
		scanf_s("%d", &secondnum1);
		printf("두번째 정수를 입력하세요: ");
		scanf_s("%d", &secondnum2);
		printf("세번째 정수를 입력하세요: ");
		scanf_s("%d", &secondnum3);

		fin = secondnum1 * secondnum2 + secondnum3;

		printf("문제 2의 정답 : %d\n", fin);

		//문제 3
		printf("첫번째 정수를 입력하세요: ");
		scanf_s("%d", &thirdnum1);
		printf("두번째 정수를 입력하세요: ");
		scanf_s("%d", &thirdnum2);

		devide = thirdnum1 / thirdnum2;
		left = thirdnum1 % thirdnum2;

		printf("두 수의 나누기 : %d", devide);
		printf("...나머지:%d\n", left);

		//문제 4 하나의 정수를 받아서 제곱을 출력하는 코드 작성
		int fourthNum;
		int square;
		printf("제곱할 정수를 입력하세요: ");
		scanf_s("%d", &fourthNum);
		
		square = fourthNum * fourthNum;

		printf("정수를 제곱한 결과 : %d\n", square);
		
		//문자 5 세개의 정수를 입력을 받아서 {fifthNum1-fifthNum2} X {fifthNum2+fifthNum3} X {fifthNum3*fifthNum1}의 결과를 출력하는 코드를 작성해보세요
		
		int fifthNum1;
		int fifthNum2;
		int fifthNum3;
		int r;

		printf("첫번째 정수를 입력하세요: ");
		scanf_s("%d", &fifthNum1);
		printf("두번째 정수를 입력하세요: ");
		scanf_s("%d", &fifthNum2);
		printf("두번째 정수를 입력하세요: ");
		scanf_s("%d", &fifthNum3);

		r = (fifthNum1 - fifthNum2) * (fifthNum2 + fifthNum3) * (fifthNum3 * fifthNum1);

		printf("결과 : %d", r);
		

}