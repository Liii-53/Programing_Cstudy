#include <stdio.h> // printf, scanf 함수를 사용하기 위해서 필요하다. //시스템 폴더의 헤더파일을 불러온다
#include "Console.h" // 프로젝트 안에 ""안에 있는 파일을 찾아서 복사해라
#include <stdbool.h>
#include "time.h"
#include <stdlib.h>

#define MAX 20 //전처리기로 MAX의 값을 10으로 치환하는 코드

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
	bool pc = true;
	bool bullet = false; // 현재 총알이 생성되지 않았으면 false, 생성되었으면 true


#if false//별을 한개씩 떨어뜨리는 코드
	int ex = 1; //별의 좌표
	int ey = 1;
	bool enemy = false; // 별이 시작할 때 False, 생성될 때 True
#endif
	//배열로 별을 생성하는 코드
	int ex[MAX] = { 0 };
	int ey[MAX] = { 0 };
	bool enemy[MAX] = { false };
	srand(time(NULL));




#if true //플레이어의 이동 조작
	while (1) //무한 루프
	{
		Clear();

#if false
		// 별(Enemy) 생성
		if (!enemy)	 // enemy가 없으면 생성해라
		{
			// ( rand() % 15 ) //    rand( ) => 0 ~ 25947 랜덤숫자반환 // 0 ~ 14 반환해주는 값
			ex = (rand() % 15) * 2;
			ey = 0;
			enemy = true;
		}
#endif

		for (int i = 0; i < MAX; i++)
		{
			if (!enemy[i])
			{
				ex[i] = (rand() % 15) * 2;
				ey[i] = 0;
				enemy[i] = true;
				break;
			}
		}




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
			printf("▲");

#if true //총알

			if (GetAsyncKeyState(VK_SPACE) & 8001)
			{
				if (bullet == false) //!bullet과 bullet == false 와 같은 의미
				{
					bx = x;
					by = y - 1;
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

#if false
			// 별(Enemy) 이동 구현
			if (enemy)
			{
				GotoXY(ex, ey);
				printf("☆");
				ey++;

				if (ey > 28)
					enemy = false;

			}
#endif

#if true //별 이동

			for (int i = 0; i < MAX; i++)
			{
				if (enemy[i])
				{
					GotoXY(ex[i], ey[i]);
					printf("★");
					ey[i]++;

					if (ey[i] > 28)
						enemy[i] = false;
				}
			}


#endif

			Sleep(100); //숫자 만큼 기다렸다가 다시 실행한다.

		}
	}

