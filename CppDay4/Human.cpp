/*
	step3. 
	char 포인터의 name, int타입의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다.
	name을 동적할당하고 나이 30, 이름 홍명보인 man 객체를 생성하시오.
	man 객체를 복사하여 copyman 객체를 생성하시오.
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
//	Human(const char * a = " ", int b = 0) {
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
//		delete[] name;
//	}
//
//};
//int main()
//{
//	Human h("홍명보", 30);
//	h.showHuman();
//	Human copyman = h;
//	copyman.showHuman();
//
//	Human xman;
//	xman = copyman;
//	//xman.showHuman();
//	return 0;
//}