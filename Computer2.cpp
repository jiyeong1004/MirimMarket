#include<iostream>
#include<conio.h>
using namespace std;

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80

//1. ��ũ�η� �¿���ϸ� �����Ѵ�.
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
					cout << "�·� �̵�" << endl;
					break;
				case RIGHT:
					cout << "��� �̵�" << endl;
					break;
				case UP:
					cout << "���� �̵�" << endl;
					break;
				case DOWN:
					cout << "�Ʒ��� �̵�" << endl;
					break;
				}
			}
		}
	}
	return 0;
}