#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human() {
		pname = nullptr;
		ptel = nullptr;
	}
	Human(const char* a, int b, const char* c) {
		pname = new char[strlen(a) + 1];
		strcpy(pname, a); 
		age = b;
		ptel = new char[strlen(c) + 1];
		strcpy(ptel, c);

	}
	~Human() {
		delete[] pname;
		delete[] ptel;
	}
	void getData() {
		cout << "�̸� : " << pname << " ���� : " << age << " ��ȭ��ȣ : " << ptel << endl;
	}
};

int main()
{
	Human h("ȫ�浿", 30, "010-1234-1234");
	h.getData();
	return 0;
}