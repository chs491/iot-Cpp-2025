//#define _CRT_SECURE_NO_WARNINGS  // strcpy() ���� ��� ����
//#include <iostream>
//#include <cstring>  // strcpy() ����� ���� ���̺귯��
//using namespace std;
//
//class MyClass {
//private:
//    int id;
//    char* name;  // ���ڿ��� ������ ���� �Ҵ� ������
//    int age;
//
//public:
//    // �⺻ ������
//    MyClass() {
//        name = nullptr;  // �ʱ�ȭ
//    }
//
//    // �Ű������� �ִ� ������
//    MyClass(int a, const char* b, int c) {
//        id = a;
//        age = c;
//        name = new char[strlen(b) + 1];  // ���ڿ� ũ�⸸ŭ ���� �Ҵ�
//        strcpy(name, b);  // ���ڿ� ����
//    }
//
//    // �Ҹ��� (���� �Ҵ�� �޸� ����)
//    ~MyClass() {
//        delete[] name;  // ���� �Ҵ�� ���ڿ� ����
//    }
//
//    // ������ ��� �Լ�
//    void getData() {
//        cout << "id : " << id << " name : " << name << " age : " << age << endl;
//    }
//};
//
//int main() {
//    MyClass obj(1, "��ö��", 20);  // ��ü ����
//    obj.getData();  // ������ ���
//
//    return 0;
//}