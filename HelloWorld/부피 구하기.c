//2424.06.12

//부피 구하기

#include <stdio.h>

int main(void)
{
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
	printf("%f", result_f);		//실수 결과
	return 0;
}