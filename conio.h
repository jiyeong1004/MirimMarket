#include<iostream>
using namespace std;

int _getch(void)
{
	char c;
	c = _getch();
	if (c == 'q') {
		cout << "����" << endl;
	}

	return 0;
}

int _kbhit(void)
{
	while (1) {
		if (_kbhit()) {
			cout << "Ű���� �Է� ����" << endl;
			break;
		}
		cout << "�Է� �����" << endl;
	}

	return 0;
}