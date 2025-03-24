/*
	 protected 접근제어는 상속받은 자식이 접근 가능하다.
*/
//#include <iostream>
//using namespace std;
//
//class Human {
//protected:
//	char name[20];
//	int age;
//public:
//	Human(){}
//	Human(const char * name, int age) {
//		strcpy_s(this->name, name);
//		this->age = age;
//	}
//	void getData() {
//		cout << "이름: " << name << " 나이: " << age << endl;
//	}
//};
//class Student : public Human {
//private:
//	int studentID;
//public:
//	Student(){}
//	Student(const char* name, int age, int studentID) : Human(name, age){
//		this->studentID = studentID;
//	}
//	void showStudent() {
//		cout << "이름: " << name << " , 나이:" << age << endl;
//		cout << "학번: " << studentID << endl;
//	}
//};
//
//int main() {
//	Human h("홍길동", 25);
//	h.getData();
//	Student h2("윤성우", 30, 202503);
//	h2.getData();
//	h2.showStudent();
//	return 0;
//}