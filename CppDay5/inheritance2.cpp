/*
	 protected ��������� ��ӹ��� �ڽ��� ���� �����ϴ�.
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
//		cout << "�̸�: " << name << " ����: " << age << endl;
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
//		cout << "�̸�: " << name << " , ����:" << age << endl;
//		cout << "�й�: " << studentID << endl;
//	}
//};
//
//int main() {
//	Human h("ȫ�浿", 25);
//	h.getData();
//	Student h2("������", 30, 202503);
//	h2.getData();
//	h2.showStudent();
//	return 0;
//}