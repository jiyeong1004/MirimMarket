#include<iostream>
#include<Windows.h>
#include<conio.h>
using namespace std;

//키보드 값
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4  //선택(스페이스바)

//함수 선언
int keyControl();
void init();
void titleDraw();
int menuDraw();
void gotoxy(int, int);

int main() {
	init();
	titleDraw();

	int menuCode = menuDraw();
	cout << "선택한 메뉴 : " << menuCode << endl;

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
	else if (temp == ' ') {  //스페이스바(공백)이 선택 버튼
		return SUBMIT;
	}
}

int menuDraw() {
	int x = 24;
	int y = 12;
	gotoxy(x - 2, y);  // -2한 이유는 >>를 클릭해야하기 때문에
	cout << ">> 메 뉴 판" << endl;
	gotoxy(x, y + 1);
	cout << "계 산 기" << endl;
	gotoxy(x, y + 2);
	cout << "   종료   " << endl;

	while (1) {  //무한반복
		int n = keyControl();  //키보드 이벤트를 키값으로 받아오기
		switch (n) {
			case UP: {  //입력된 키의 값이 UP인 경우 (w)
				if (y > 12) {  //y는 12 ~ 14까지만 이동
					gotoxy(x - 2, y);  //x-2하는 이유는 ">>"를 두 칸 이전에 출력하기 위해
					cout << " " << endl;  //원래 위치를 지우고
					gotoxy(x - 2, --y);  //새로 이동한 위치로 이동하여
					cout << ">>" << endl;  //다시 그리기
				}
				break;
			}
			
			case DOWN: {  //입력된 키의 값이 DOWN인 경우 (s)
				if (y < 14) {  //최대 14
					gotoxy(x - 2, y);
					cout << " " << endl;
					gotoxy(x - 2, ++y);
					cout << ">>" << endl;
				}
				break;
			}
			case SUBMIT: {
				return y - 12;  //스페이스바(선택)되었을 경우 y-12
				//y 시작 위치가 12였으므로 y-12를 하면 0, 1, 2 세 숫자를 받을 수 있다.
			}
		}
	}
}