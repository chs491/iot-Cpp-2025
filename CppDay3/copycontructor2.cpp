/*
	(deep copy)���������
    �����Ҵ� ���� ��� �����ϴ� ��ü�� ���� �Ҵ� �޾Ƽ� ������ �����Ͽ� ����Ǿ�� �Ѵ�.
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>  // strcpy, strlen ����� ���� �߰�
//
//class Person {
//private:
//    char* name;  // �����ͷ� �����Ͽ� ���� �Ҵ�
//    int age;
//public:
//    Person() : name(nullptr), age(0) {}  // �⺻ ������ �ʱ�ȭ
//
//    Person(const char* pname, int age) {
//        printf("constructor call!!!\n");
//        this->name = new char[strlen(pname) + 1];  // ���� �Ҵ�
//        strcpy(this->name, pname);
//        this->age = age;
//    }
//
//    Person(const Person& other) {  // ���� ������
//        printf("copy constructor!!\n");
//        this->age = other.age;
//        this->name = new char[strlen(other.name) + 1];  // ���� ���� ����
//        strcpy(this->name, other.name);
//    }
//
//    void printPerson() {
//        printf("name : %s, age : %d\n", this->name, this->age);
//    }
//
//    ~Person() {
//        delete[] this->name;  // ���� �Ҵ�� �޸� ����
//    }
//};
//
//int main()
//{
//    Person p("ȫ�浿", 30);
//    p.printPerson();
//
//    Person p2(p);  // ���� ������ ȣ��
//    p2.printPerson();
//
//    Person p3 = p;  // ���� ������ ȣ��
//    p3.printPerson();
//
//    return 0;
//}
/*
    ����Ʈ�� �ڵ����� �����޴� ������ : ����Ʈ ������, ���� ������, �Ҹ���
*/


//void a(int aa) {
//	aa++;
//}
//
//void main()
//{
//	int n = 10;
//	a(n);
//
//}