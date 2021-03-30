#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#define MAXLEN 100
using namespace std;

class Computer {
	char name[30];
	char price[30];
public:
	Computer(const char* n, const char* p);
	void Display();
	void Menu();  //���� �޴�
	void Snack();  //����
	void Drink();  //�����
	void Ice();  //���̽�ũ��
	void Jjujuba();  //���޹�
	void ConIce();  //�� ���̽�ũ��
	void StickIce();  //���� ���̽�ũ��
	void Jelly();  //����
	void Bread();  //��
	void Chicken();  //ġŲ
	void Dumpling();  //����
	void Function();  //���
};

class Login : public Computer {
	char id[MAXLEN];
	char pass[MAXLEN];
public:
	Login(const char* id, const char* pass);
	void Display();
	void Input();
	void Check(const char* id, const char* pass);
};

Computer::Computer(const char* n, const char* p)
{
	strcpy_s(this->name, n);
	strcpy_s(this->price, p);
}

void Computer::Display()
{
	int choice;

	while (true) {
		int i = 3;
		cout << "\n===== ȯ���մϴ� =====\n" << endl;
		cout << "1. ���� �޴� ����(���� ���� ����, ���� ���� ����)" << endl << endl;
		cout << "2. ���� ���(���� ���)" << endl << endl;
		cout << "3. ����" << endl << endl;
		cout << "�Է� => ";
		cin >> choice;

		switch (choice) {
		case 1: Menu(); break;
		case 2: Function(); break;
		case 3: exit(1);
		default:
			cout << "�ٽ� �Է��ϼ���..." << endl;
		}
		system("pause");  //�Ͻ�����
		system("cls");  //ȭ�鿡 �ִ� ������ �� ����
	}
}

void Computer::Menu()
{
	system("cls");
	int choice;

	while (true) {
		int i =7;
		cout << "\n===== ���� �޴� =====\n" << endl;
		cout << "1. ����" << endl << endl;
		cout << "2. �����" << endl << endl;
		cout << "3. ���̽�ũ��" << endl << endl;
		cout << "4. ����" << endl << endl;
		cout << "5. ��" << endl << endl;
		cout << "6. ġŲ" << endl << endl;
		cout << "7. ����" << endl << endl;
		cout << "8. ����" << endl << endl;
		cout << "9. ����" << endl << endl;
		cout << "�Է� => ";
		cin >> choice;

		switch (choice) {
		case 1: Snack(); break;  //����
		case 2: Drink(); break;  //�����
		case 3: Ice(); break;  //���̽�ũ��
		case 4: Jelly(); break;  //����
		case 5: Bread(); break;  //��
		case 6: Chicken(); break;  //ġŲ
		case 7: Dumpling(); break;  //����
		case 8: return;
		case 9: exit(1);
		default:
			cout << "�ٽ� �Է��ϼ���..." << endl;
		}
		system("pause");  //�Ͻ�����
		system("cls");  //ȭ�鿡 �ִ� ������ �� ����
	}
}
//����
void Computer::Snack()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "��ǰ��\t\t\t| ����" << endl;
	cout << "------------------------------------" << endl;
	cout << "����\t\t\t| 1200��" << endl;
	cout << "�����\t\t\t| 1200��" << endl;
	cout << "����Ĩ��Ű\t\t| 1200��" << endl;
	cout << "ĭ��\t\t\t| 1000��" << endl;
	cout << "���ڼ���\t\t| 1000��" << endl;
	cout << "�ſ�� ��Ĩ\t\t| 1000��" << endl;
	cout << "���ھ�Ĩ\t\t| 1000��" << endl;
	cout << "������\t\t\t| 500��" << endl;	
	cout << "����\t\t\t| 500��" << endl;
	cout << "------------------------------------" << endl << endl;
}
//�����
void Computer::Drink()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "��ǰ��\t\t\t| ����" << endl;
	cout << "------------------------------------" << endl;
	cout << "��ī������Ʈ\t\t| 1200��" << endl;
	cout << "�ٳ��� ����\t\t| 1000��" << endl;
	cout << "�ӽ�Ĺ �帵ũ\t\t| 700��" << endl;
	cout << "���� �帵ũ\t\t| 700��" << endl;
	cout << "������ �帵ũ\t\t| 500��" << endl;
	cout << "���� �帵ũ\t\t| 500��" << endl;
	cout << "���� �帵ũ\t\t| 500��" << endl;
	cout << "------------------------------------" << endl << endl;
}
//���̽�ũ��
void Computer::Ice()
{
	system("cls");
	int choice;

	while (true) {
		cout << "\n1. ���޹�(1000��)" << endl << endl;
		cout << "2. �� ���̽�ũ��(1000��)" << endl << endl;
		cout << "3. ���� ���̽�ũ��(700��)" << endl << endl;
		cout << "4. ����" << endl << endl;
		cout << "5. ����" << endl << endl;
		cout << "�Է� => "; cin >> choice;

		switch (choice) {
		case 1: Jjujuba(); break;  //���޹�
		case 2: ConIce(); break;  //�� ���̽�ũ��
		case 3: StickIce(); break;  //���� ���̽�ũ��
		case 4: return;  //����
		case 5: exit(1);  //����
		default:
			cout << "�ٽ� �Է��ϼ���..." << endl;
		}
		system("pause");  //�Ͻ�����
		system("cls");  //ȭ�鿡 �ִ� ������ �� ����
	}
}
//���޹�
void Computer::Jjujuba()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "��ǰ��\t\t\t| ����" << endl;
	cout << "------------------------------------" << endl;
	cout << "�͵�(�Ҵٸ�)\t\t| 1000��" << endl;
	cout << "������\t\t\t| 1000��" << endl;
	cout << "�������\t\t| 1000��" << endl;
	cout << "��ũ����\t\t| 1000��" << endl;
	cout << "����(������/û����)\t| 1000��" << endl;
	cout << "�𱸸�(��ġ/��ġ)\t| 1000��" << endl;
	cout << "��������(�鵵)\t\t| 1000��" << endl;
	cout << "------------------------------------" << endl << endl;
}
//�� ���̽�ũ��
void Computer::ConIce()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "��ǰ��\t\t\t| ����" << endl;
	cout << "------------------------------------" << endl;
	cout << "������\t\t\t| 1000��" << endl;
	cout << "������\t\t\t| 1000��" << endl;
	cout << "������(����/��Ʈ)\t| 1000��" << endl;
	cout << "�ζ�(����ûũ ���ϵ�)\t| 1000��" << endl;
	cout << "�ζ�(�ǽ�Ÿġ��)\t| 1000��" << endl;
	cout << "�举��\t\t\t| 1000��" << endl;
	cout << "------------------------------------" << endl << endl;
}
//���� ���̽�ũ��
void Computer::StickIce()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "��ǰ��\t\t\t| ����" << endl;
	cout << "------------------------------------" << endl;
	cout << "������\t\t\t| 700��" << endl;
	cout << "������\t\t\t| 700��" << endl;
	cout << "�举��(�÷���/����)\t| 700��" << endl;
	cout << "�޷γ�\t\t\t| 700��" << endl;
	cout << "�ֹֽ�\t\t\t| 700��" << endl;
	cout << "���ڹ�\t\t\t| 700��" << endl;
	cout << "������\t\t\t| 700��" << endl;
	cout << "��ũ����\t\t| 700��" << endl;
	cout << "��������\t\t| 700��" << endl;
	cout << "------------------------------------" << endl << endl;
}
//����
void Computer::Jelly()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "��ǰ��\t\t\t| ����" << endl;
	cout << "------------------------------------" << endl;
	cout << "����¯(����/����)\t| 500��" << endl;
	cout << "���̺�(������/����)\t| 500��" << endl;
	cout << "������\t\t\t| 700��" << endl;
	cout << "���޴���\t\t| 700��" << endl;
	cout << "���̼�\t\t\t| 1000��" << endl;
	cout << "------------------------------------" << endl << endl;
}
//��
void Computer::Bread()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "��ǰ��\t\t\t| ����" << endl;
	cout << "------------------------------------" << endl;
	cout << "�Ҽ��� ��\t\t| 1200��" << endl;
	cout << "���ڷ�����\t\t| 1200��" << endl;
	cout << "��������\t\t| 1300��" << endl;
	cout << "��ȣ��\t\t\t| 1500��" << endl;
	cout << "��ī�� ���ڻ�\t\t| 1500��" << endl;
	cout << "------------------------------------" << endl << endl;
}
//ġŲ
void Computer::Chicken()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "��ǰ��\t\t\t| ����" << endl;
	cout << "------------------------------------" << endl;
	cout << "���� ġŲ\t\t| 2500��" << endl;
	cout << "��� ġŲ\t\t| 2500��" << endl;
	cout << "------------------------------------" << endl << endl;
}
//����
void Computer::Dumpling()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "��ǰ��\t\t\t| ����" << endl;
	cout << "------------------------------------" << endl;
	cout << "��� ����\t\t| 1200��" << endl;
	cout << "��ġ ����\t\t| 1200��" << endl;
	cout << "------------------------------------" << endl << endl;
}
//���
void Computer::Function()
{
	system("cls");
	int choice;

	while (true) {
		cout << "\n1. ����" << endl << endl;
		cout << "2. �޸���" << endl << endl;
		cout << "3. ����" << endl << endl;
		cout << "�Է� => "; cin >> choice;

		switch (choice) {
		case 1: system("calc"); break;
		case 2: system("notepad"); break;
		case 3: return;
		default:
			cout << "�ٽ� �Է��ϼ���..." << endl;
		}
		system("pause"); system("cls");
	}
}

Login::Login(const char* id, const char* pass)
	: Computer("�����", "700��") {
	strcpy_s(this->id, id);
	strcpy_s(this->pass, pass);
}
void Login::Display()
{
	int choice;

	while (true) {
		cout << "\n1. �α���" << endl << endl;
		cout << "2. ����" << endl << endl;
		cout << "�Է� => ";
		cin >> choice;

		switch (choice) {
		case 1: Input(); break;
		case 2: exit(1);
		default:
			cout << "�ٽ� �Է��ϼ���..." << endl;
		}
		system("pause");  //�Ͻ�����
		system("cls");  //ȭ�鿡 �ִ� ������ �� ����
	}
}
void Login::Input()
{
	char id[MAXLEN], pass[MAXLEN];
	cout << "\n���̵� => "; cin >> id;
	cout << "��й�ȣ => "; cin >> pass;
	Check(id, pass);
}
void Login::Check(const char* id, const char* pass)
{
	if (!strcmp(this->id, id) && !strcmp(this->pass, pass))
	{
		cout << "\n�α��� ����!" << endl << endl;
		system("pause");
		system("cls");
		Computer::Display();
	}
	else
		cout << "\n�α��� ����!" << endl << endl;
}

int main(void)
{
	Login login("mirim", "2110");
	login.Display();

	return 0;
}