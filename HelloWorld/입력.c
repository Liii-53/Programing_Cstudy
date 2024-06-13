// (2024.06.13) 입력
// 학습목표 : scanf 함수의 실습
// 입력을 받아서 저장할 변수를 미리 선언
// 기본 사용법 : scanf("%d:, &변수의 이름);
//scanf_s("%d", &num);

#include <stdio.h>

int main(void)
{
	int num;
	printf("num의 값을 입력하세요: ");
	scanf_s("%d", &num);
	printf("입력된 num의 값 : %d", num);
	return 0;
}