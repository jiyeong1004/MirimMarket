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
	void Menu();  //매점 메뉴
	void Snack();  //과자
	void Drink();  //음료수
	void Ice();  //아이스크림
	void Jjujuba();  //쭈쭈바
	void ConIce();  //콘 아이스크림
	void StickIce();  //막대 아이스크림
	void Jelly();  //젤리
	void Bread();  //빵
	void Chicken();  //치킨
	void Dumpling();  //만두
	void Function();  //기능
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
		cout << "\n===== 환영합니다 =====\n" << endl;
		cout << "1. 매점 메뉴 보기(매점 물건 종류, 매점 물건 가격)" << endl << endl;
		cout << "2. 가격 계산(계산기 기능)" << endl << endl;
		cout << "3. 종료" << endl << endl;
		cout << "입력 => ";
		cin >> choice;

		switch (choice) {
		case 1: Menu(); break;
		case 2: Function(); break;
		case 3: exit(1);
		default:
			cout << "다시 입력하세요..." << endl;
		}
		system("pause");  //일시정지
		system("cls");  //화면에 있는 내용을 다 지움
	}
}

void Computer::Menu()
{
	system("cls");
	int choice;

	while (true) {
		int i =7;
		cout << "\n===== 매점 메뉴 =====\n" << endl;
		cout << "1. 과자" << endl << endl;
		cout << "2. 음료수" << endl << endl;
		cout << "3. 아이스크림" << endl << endl;
		cout << "4. 젤리" << endl << endl;
		cout << "5. 빵" << endl << endl;
		cout << "6. 치킨" << endl << endl;
		cout << "7. 만두" << endl << endl;
		cout << "8. 이전" << endl << endl;
		cout << "9. 종료" << endl << endl;
		cout << "입력 => ";
		cin >> choice;

		switch (choice) {
		case 1: Snack(); break;  //과자
		case 2: Drink(); break;  //음료수
		case 3: Ice(); break;  //아이스크림
		case 4: Jelly(); break;  //젤리
		case 5: Bread(); break;  //빵
		case 6: Chicken(); break;  //치킨
		case 7: Dumpling(); break;  //만두
		case 8: return;
		case 9: exit(1);
		default:
			cout << "다시 입력하세요..." << endl;
		}
		system("pause");  //일시정지
		system("cls");  //화면에 있는 내용을 다 지움
	}
}
//과자
void Computer::Snack()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "상품명\t\t\t| 가격" << endl;
	cout << "------------------------------------" << endl;
	cout << "비요뜨\t\t\t| 1200원" << endl;
	cout << "새우깡\t\t\t| 1200원" << endl;
	cout << "초코칩쿠키\t\t| 1200원" << endl;
	cout << "칸쵸\t\t\t| 1000원" << endl;
	cout << "초코송이\t\t| 1000원" << endl;
	cout << "매운맛 콘칩\t\t| 1000원" << endl;
	cout << "감자알칩\t\t| 1000원" << endl;
	cout << "나나콘\t\t\t| 500원" << endl;	
	cout << "미쯔\t\t\t| 500원" << endl;
	cout << "------------------------------------" << endl << endl;
}
//음료수
void Computer::Drink()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "상품명\t\t\t| 가격" << endl;
	cout << "------------------------------------" << endl;
	cout << "포카리스웨트\t\t| 1200원" << endl;
	cout << "바나나 우유\t\t| 1000원" << endl;
	cout << "머스캣 드링크\t\t| 700원" << endl;
	cout << "석류 드링크\t\t| 700원" << endl;
	cout << "오렌지 드링크\t\t| 500원" << endl;
	cout << "망고 드링크\t\t| 500원" << endl;
	cout << "포도 드링크\t\t| 500원" << endl;
	cout << "------------------------------------" << endl << endl;
}
//아이스크림
void Computer::Ice()
{
	system("cls");
	int choice;

	while (true) {
		cout << "\n1. 쭈쭈바(1000원)" << endl << endl;
		cout << "2. 콘 아이스크림(1000원)" << endl << endl;
		cout << "3. 막대 아이스크림(700원)" << endl << endl;
		cout << "4. 이전" << endl << endl;
		cout << "5. 종료" << endl << endl;
		cout << "입력 => "; cin >> choice;

		switch (choice) {
		case 1: Jjujuba(); break;  //쭈쭈바
		case 2: ConIce(); break;  //콘 아이스크림
		case 3: StickIce(); break;  //막대 아이스크림
		case 4: return;  //이전
		case 5: exit(1);  //종료
		default:
			cout << "다시 입력하세요..." << endl;
		}
		system("pause");  //일시정지
		system("cls");  //화면에 있는 내용을 다 지움
	}
}
//쭈쭈바
void Computer::Jjujuba()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "상품명\t\t\t| 가격" << endl;
	cout << "------------------------------------" << endl;
	cout << "뽕따(소다맛)\t\t| 1000원" << endl;
	cout << "빠삐코\t\t\t| 1000원" << endl;
	cout << "더블더블\t\t| 1000원" << endl;
	cout << "탱크보이\t\t| 1000원" << endl;
	cout << "심쿵(복숭아/청포도)\t| 1000원" << endl;
	cout << "모구모구(리치/피치)\t| 1000원" << endl;
	cout << "젤루조아(백도)\t\t| 1000원" << endl;
	cout << "------------------------------------" << endl << endl;
}
//콘 아이스크림
void Computer::ConIce()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "상품명\t\t\t| 가격" << endl;
	cout << "------------------------------------" << endl;
	cout << "월드콘\t\t\t| 1000원" << endl;
	cout << "구구콘\t\t\t| 1000원" << endl;
	cout << "슈퍼콘(초코/민트)\t| 1000원" << endl;
	cout << "부라보(초코청크 마일드)\t| 1000원" << endl;
	cout << "부라보(피스타치오)\t| 1000원" << endl;
	cout << "요맘때\t\t\t| 1000원" << endl;
	cout << "------------------------------------" << endl << endl;
}
//막대 아이스크림
void Computer::StickIce()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "상품명\t\t\t| 가격" << endl;
	cout << "------------------------------------" << endl;
	cout << "보석바\t\t\t| 700원" << endl;
	cout << "별난바\t\t\t| 700원" << endl;
	cout << "요맘때(플레인/딸기)\t| 700원" << endl;
	cout << "메로나\t\t\t| 700원" << endl;
	cout << "쌍쌍바\t\t\t| 700원" << endl;
	cout << "수박바\t\t\t| 700원" << endl;
	cout << "옥동자\t\t\t| 700원" << endl;
	cout << "스크류바\t\t| 700원" << endl;
	cout << "초코퍼지\t\t| 700원" << endl;
	cout << "------------------------------------" << endl << endl;
}
//젤리
void Computer::Jelly()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "상품명\t\t\t| 가격" << endl;
	cout << "------------------------------------" << endl;
	cout << "새콤짱(딸기/포도)\t| 500원" << endl;
	cout << "꼬미볼(복숭아/포도)\t| 500원" << endl;
	cout << "마이쮸\t\t\t| 700원" << endl;
	cout << "새콤달콤\t\t| 700원" << endl;
	cout << "아이셔\t\t\t| 1000원" << endl;
	cout << "------------------------------------" << endl << endl;
}
//빵
void Computer::Bread()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "상품명\t\t\t| 가격" << endl;
	cout << "------------------------------------" << endl;
	cout << "소세지 빵\t\t| 1200원" << endl;
	cout << "초코롤케익\t\t| 1200원" << endl;
	cout << "애플파이\t\t| 1300원" << endl;
	cout << "꿀호떡\t\t\t| 1500원" << endl;
	cout << "시카고 피자빵\t\t| 1500원" << endl;
	cout << "------------------------------------" << endl << endl;
}
//치킨
void Computer::Chicken()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "상품명\t\t\t| 가격" << endl;
	cout << "------------------------------------" << endl;
	cout << "간장 치킨\t\t| 2500원" << endl;
	cout << "양념 치킨\t\t| 2500원" << endl;
	cout << "------------------------------------" << endl << endl;
}
//만두
void Computer::Dumpling()
{
	system("cls");
	cout << "------------------------------------" << endl;
	cout << "상품명\t\t\t| 가격" << endl;
	cout << "------------------------------------" << endl;
	cout << "고기 만두\t\t| 1200원" << endl;
	cout << "김치 만두\t\t| 1200원" << endl;
	cout << "------------------------------------" << endl << endl;
}
//기능
void Computer::Function()
{
	system("cls");
	int choice;

	while (true) {
		cout << "\n1. 계산기" << endl << endl;
		cout << "2. 메모장" << endl << endl;
		cout << "3. 이전" << endl << endl;
		cout << "입력 => "; cin >> choice;

		switch (choice) {
		case 1: system("calc"); break;
		case 2: system("notepad"); break;
		case 3: return;
		default:
			cout << "다시 입력하세요..." << endl;
		}
		system("pause"); system("cls");
	}
}

Login::Login(const char* id, const char* pass)
	: Computer("음료수", "700원") {
	strcpy_s(this->id, id);
	strcpy_s(this->pass, pass);
}
void Login::Display()
{
	int choice;

	while (true) {
		cout << "\n1. 로그인" << endl << endl;
		cout << "2. 종료" << endl << endl;
		cout << "입력 => ";
		cin >> choice;

		switch (choice) {
		case 1: Input(); break;
		case 2: exit(1);
		default:
			cout << "다시 입력하세요..." << endl;
		}
		system("pause");  //일시정지
		system("cls");  //화면에 있는 내용을 다 지움
	}
}
void Login::Input()
{
	char id[MAXLEN], pass[MAXLEN];
	cout << "\n아이디 => "; cin >> id;
	cout << "비밀번호 => "; cin >> pass;
	Check(id, pass);
}
void Login::Check(const char* id, const char* pass)
{
	if (!strcmp(this->id, id) && !strcmp(this->pass, pass))
	{
		cout << "\n로그인 성공!" << endl << endl;
		system("pause");
		system("cls");
		Computer::Display();
	}
	else
		cout << "\n로그인 실패!" << endl << endl;
}

int main(void)
{
	Login login("mirim", "2110");
	login.Display();

	return 0;
}