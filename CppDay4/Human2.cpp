/*
	step4.
	char �������� name, intŸ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
	xman = man�� �����Ű�ÿ�.
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	Human(const char* a = " ", int b = 0) {
//		name = new char[strlen(a) + 1];
//		strcpy(name, a);
//		age = b;
//	}
//
//	Human(const Human& other) {
//		printf("copy constructor~\n");
//		name = new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//		age = other.age;
//	}
//	void showHuman() {
//		printf("name: %s, age: %d\n", name, age);
//	}
//	~Human() {
//		printf("destructor\n");
//		delete[] name;
//	}
//	const Human& operator=(const Human& other);
//
//};
//const Human& Human :: operator=(const Human& other) {
//	if(this != &other){
//		delete[] name;
//		printf("operator overloading\n");
//		this->name = new char[strlen(other.name) + 1];
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	return *this;
//}
//int main()
//{
//	Human h("ȫ��", 30);
//	//h.showHuman();
//	Human copyman = h;
//	//copyman.showHuman();
//
//	Human xman;
//	xman = copyman;
//	xman.showHuman();
//	return 0;
//}