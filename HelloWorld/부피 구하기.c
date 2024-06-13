//2424.06.12

//���� ���ϱ�

#include <stdio.h>

int main(void)
{
	int width = 12;
	int height = 10;
	int length = 8;	//width, height, length ������ ���� �� �ִ� ���� ����

	int volume;
	volume = width * height * length;	// �� ���� ���� ��(����) Volume ������ �����ϼ���

	int result;
	result = (volume + 164) / 165;

	float volume_f = width * height * length;
	float result_f;
	result_f = volume_f / 165;	//Volume�� 165�� ������ ���� ���ϴ� ��� ���� ���Ͽ� ����ϼ���

	printf("%d \n", result);	// ����, �ݿø� ���
	printf("%f", result_f);		//�Ǽ� ���
	return 0;
}