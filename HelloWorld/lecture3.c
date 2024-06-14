//2024.06.12 변수(Variable)
//기본 환경 설정
//main 함수는 시작과 끝을 알리는 핵심 함수 이다. 반드시 1개만 존재해야 한다.
//main 이름의 함수가 둘 이상 존재하면 에러가 발생

//소스파일 - 속성 - 빌드에서 제외

//컴퓨터한테 명령한 내용을 저장하기 위해서 변수를 사용해야 한다.
//선언(Declare) : 컴파일러에게 변수가 무엇을 저장하고, 얼만큼 저장하는지 알려주는 것.
// int : 정수
// float : 실수

//선언 방법
// int(데이터 형태) a(변수 이름) ;
// 변수 a에 정수 형태의 데이터를 넣을 수 있게 된다.

//할당(assignment) : 선언한 변수에 데이터를 넣는 것
// int a = 10; (변수 a에 데이터 10을 넣는다)

//초기화(Initialize)
//변수에 처음으로 데이터를 할당하는 것

#include "lectures.h"

void lecture3()
{
	printf("Hello World! 이것은 3강의 내용입니다.\n");

	int a;
	a = 4 + 7;
	printf("%d \n", a);
	float b = 3.2f + 4.7f;
	printf("%f \n", b);

//2424.06.12

//부피 구하기

	int width = 12;
	int height = 10;
	int length = 8;	//width, height, length 정수를 담을 수 있는 변수 선언

	int volume;
	volume = width * height * length;	// 세 변을 곱한 값(부피) Volume 변수에 저장하세요

	int result;
	result = (volume + 164) / 165;

	float volume_f = width * height * length;
	float result_f;
	result_f = volume_f / 165;	//Volume을 165로 나누어 실제 원하는 계산 값을 구하여 출력하세요

	printf("%d \n", result);	// 정수, 반올림 결과
	printf("%f \n", result_f);		//실수 결과

//2424.06.12

// 섭씨, 화씨
// 화씨 = 9/5 * 섭씨 + 32
// 화씨가 실수로 표현될 수 있도록 변수를 선언해주세요.
// 9/5의 값이 1이 아닌 1.8이 나와야 합니다.
// 섭씨 1, 화씨 33.8


	float c = 1;
	float f;
	f = (9.0f / 5.0f * c) + 32;

	printf("섭씨 to 화씨 : %.2f \n", f);
}