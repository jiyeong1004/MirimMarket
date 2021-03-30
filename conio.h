#include<iostream>
using namespace std;

int _getch(void)
{
	char c;
	c = _getch();
	if (c == 'q') {
		cout << "종료" << endl;
	}

	return 0;
}

int _kbhit(void)
{
	while (1) {
		if (_kbhit()) {
			cout << "키보드 입력 감지" << endl;
			break;
		}
		cout << "입력 대기중" << endl;
	}

	return 0;
}