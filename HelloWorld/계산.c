//변수의 이름 num1,num2,num3
//두개의 정수를 입력받아서 두 수의 뺄셈과 곱셈의 결과를 출력해 보세요
//세게의 정수를 입력받아소 num1 * num 2 + num3를 출력하는 코드를 작성해보세요
//두게의 정수를 입력받아서 몫과 나머지를 출력하는 코드를 작성보세요

#include <stdio.h>

int main(void)
{
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

	printf("문제 2의 정답 : %d", fin);

	//문제 3

	return 0;
}