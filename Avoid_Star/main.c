#include <stdio.h> // printf, scanf 함수를 사용하기 위해서 필요하다. //시스템 폴더의 헤더파일을 불러온다
#include "Console.h" // 프로젝트 안에 ""안에 있는 파일을 찾아서 복사해라
#include <stdbool.h>

int main(void)
{
	//콘솔창에 게임의 맵의 크기를 만들어 줘야합니다
	SetConsoleSize(30, 30);
	//SetConsoleSize 함수를 호출해보세요

	SetConsoleCursorVisibility(0); // 커서를 보이지 않게 한다

	//움직일 수 있는 캐릭터
	//캐릭터의 위치 (14,28);

	//플레이어의 총알 구현(Bullet)
	//GotoXY, Printf 함수를 사용하여 화면에 총알을 출력해보세요


	int x = 14; //플레이어의 좌표
	int y = 28;
	int bx = 0; //총알의 좌표
	int by = 0;
	bool bullet = false; // 현재 총알이 생성되지 않았으면 false, 생성되었으면 true




#if true //플레이어의 이동 조작
	while (1) //무한 루프
	{
		Clear();

		if (GetAsyncKeyState(VK_LEFT) & 8001) //왼쪽키를 눌렀을 때
		{
			if (x < 1) x = 1;
			x--; // x 좌표에서 1을 뺀다
		}

		else if (GetAsyncKeyState(VK_RIGHT) & 8001) //오른쪽키를 눌렀을 때
		{
			if (x > 28) x = 28;
			x++; // x 좌표에서 1을 더한다
		}

		else if (GetAsyncKeyState(VK_UP) & 8001) //위쪽키를 눌렀을 때
		{
			if (y < 1) y = 1;
			y--; // y 좌표에서 1을 뺀다
		}

		else if (GetAsyncKeyState(VK_DOWN) & 8001) //아래쪽키를 눌렀을 때
		{
			if (y > 28) y = 28;
			y++; // y 좌표에서 1을 더한다
		}
#endif
		GotoXY(x, y);
		printf("0");

#if true //총알
		if (GetAsyncKeyState(VK_SPACE) & 8001);
		{
			if (bullet == false) //!bullet과 bullet == false 와 같은 의미
			{
				bx = x;
				bx = y - 1;
				bullet = true;
			}

		}
		if (bullet == true) //총알이 생성되어있을 경우에만
		{
			by--;
			GotoXY(bx, by);
			printf("↑");
			if (by < 1)
				bullet = false;
		}
	

		
#endif

		Sleep(100); //숫자 만큼 기다렸다가 다시 실행한다.

	}
}