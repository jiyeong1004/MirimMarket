#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void login();
void registr();
void forgot();

main()
{
	int choice;
	cout << "************* LOGIN ***************" << endl;
	cout << "1. �α���" << endl;
	cout << "2. �����ϱ�" << endl;
	cout << "3. ���̵�/��� ã��" << endl;
	cout << "�Է� => ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		login();
		break;
	case 2:
		registr();
		break;
	case 3:
		forgot();
		break;
	case 4:
		cout << "�α��� ������ ��� ����" << endl;
		break;
	default:
		cout << "�ٽ� �Է��ϼ���..." << endl;
		main();
	}
}

void registr()
{
	string reguser, regpass;
	system("cls");
	cout << "Enter the username : ";
	cin >> reguser;
	cout << "Enter the password : ";
	cin >> regpass;

	ofstream reg("database.txt", ios::app);
	reg << reguser << ' ' << regpass << endl;
	system("cls");
	cout << "Resigtration is successfull" << endl;
	main();
}

void login()
{
	int exist;  //�����ϴ�
	string user, pass, u, p;
	system("cls");
	cout << "���̵� : ";
	cin >> user;
	cout << "��й�ȣ : ";
	cin >> pass;

	ifstream input("database.txt");

	while (input >> u >> p)
	{
		if (u == user && p == pass)
		{
			exist = 1;
		}
	}
	input.close();
	if (exist == 1)
	{
		cout << "Hello " << user << "\nWe're glad that you're here" << endl;
		cin.get();
		cin.get();
		main();
	}
	else {
		cout << "Sorry, Login error." << endl;
		cin.get();
		cin.get();
		main();
	}
}

void forgot()
{
	int ch;
	system("cls");
	cout << "1. Search your account by username" << endl;
	cout << "2. Search your account by password" << endl;
	cout << "3. Mainmenu" << endl;
	cout << "�Է� => ";
	cin >> ch;

	switch (ch)
	{
		case 1:
		{
			int ex = 0;
			string searchuser, su, sp;
			cout << "���̵� �Է� => ";
			cin >> searchuser;

			ifstream searchu("database.txt");
			while (searchu >> su >> sp)
			{
				if (su == searchuser)
				{
					ex = 1;
					break;
				}
			}
			searchu.close();
			if (ex == 1)
			{
				cout << "Hurray ! account found !" << endl;
				cout << "your password is " << sp;
				cin.get();
				cin.get();
				main();
			}
			else
			{
				cout << "sorry, your account is not found" << endl;
				cin.get();
				cin.get();
				main();
			}
			break;
		}
		case 2:
		{
			int exi = 0;
			string searchpass, su2, sp2;
			cout << "��й�ȣ �Է� => ";
			cin >> searchpass;

			ifstream searchp("database.txt");
			while (searchp >> su2 >> sp2)
			{
				if (sp2 == searchpass)
				{
					exi = 1;
					break;
				}
			}
			searchp.close();
			if (exi == 1)
			{
				cout << "hurray ! the account found" << endl;
				cout << "Your username is : " << su2 << endl;
				cout << "Your password is : " << sp2;
				cin.get();
				cin.get();
				main();
			}
			break;
		}
		case 3:
		{
			main();
			break;
		}
		default:
		{
			cout << "you have given a wrong choice. press a key to try again.";
			cin.get();
			cin.get();
			forgot();
		}
	}
}