#include<iostream>
#include<Windows.h>
#include<conio.h>
using namespace std;

//Ű���� ��
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4  //����(�����̽���)

//�Լ� ����
int keyControl();
void init();
void titleDraw();
int menuDraw();
void gotoxy(int, int);

int main() {
	init();
	titleDraw();

	int menuCode = menuDraw();
	cout << "������ �޴� : " << menuCode << endl;

	return 0;
}

int keyControl() {
	char temp = _getch();
	//char temp = (char)iTemp;

	if (temp == 'w' || temp = 'W') {
		return UP;
	}
	else if (temp == 'a' || temp == 'A') {
		return LEFT;
	}
	else if (temp == 's' || temp == 'S') {
		return DOWN;
	}
	else if (temp == 'd' || temp == 'D') {
		return RIGHT;
	}
	else if (temp == ' ') {  //�����̽���(����)�� ���� ��ư
		return SUBMIT;
	}
}

int menuDraw() {
	int x = 24;
	int y = 12;
	gotoxy(x - 2, y);  // -2�� ������ >>�� Ŭ���ؾ��ϱ� ������
	cout << ">> �� �� ��" << endl;
	gotoxy(x, y + 1);
	cout << "�� �� ��" << endl;
	gotoxy(x, y + 2);
	cout << "   ����   " << endl;

	while (1) {  //���ѹݺ�
		int n = keyControl();  //Ű���� �̺�Ʈ�� Ű������ �޾ƿ���
		switch (n) {
			case UP: {  //�Էµ� Ű�� ���� UP�� ��� (w)
				if (y > 12) {  //y�� 12 ~ 14������ �̵�
					gotoxy(x - 2, y);  //x-2�ϴ� ������ ">>"�� �� ĭ ������ ����ϱ� ����
					cout << " " << endl;  //���� ��ġ�� �����
					gotoxy(x - 2, --y);  //���� �̵��� ��ġ�� �̵��Ͽ�
					cout << ">>" << endl;  //�ٽ� �׸���
				}
				break;
			}
			
			case DOWN: {  //�Էµ� Ű�� ���� DOWN�� ��� (s)
				if (y < 14) {  //�ִ� 14
					gotoxy(x - 2, y);
					cout << " " << endl;
					gotoxy(x - 2, ++y);
					cout << ">>" << endl;
				}
				break;
			}
			case SUBMIT: {
				return y - 12;  //�����̽���(����)�Ǿ��� ��� y-12
				//y ���� ��ġ�� 12�����Ƿ� y-12�� �ϸ� 0, 1, 2 �� ���ڸ� ���� �� �ִ�.
			}
		}
	}
}