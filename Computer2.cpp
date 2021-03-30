#include<iostream>
#include<conio.h>
using namespace std;

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80

//1. 매크로로 좌우상하를 설정한다.
int main(void)
{
	char c;
	while (1) {
		if (_kbhit()) {
			c = _getch();
			if (c == -32) {
				c = _getch();
				switch (c) {
				case LEFT:
					cout << "좌로 이동" << endl;
					break;
				case RIGHT:
					cout << "우로 이동" << endl;
					break;
				case UP:
					cout << "위로 이동" << endl;
					break;
				case DOWN:
					cout << "아래로 이동" << endl;
					break;
				}
			}
		}
	}
	return 0;
}