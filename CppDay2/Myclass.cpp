/*

*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//class MyClass {
//private:
//	int id;
//	char name[20] = {};
//	int age;
//public:
//	void setData(int a, const char *b, int c) { // ���ڿ� ���Ǵ� const char *() �� ����
//		id = a;
//		strncpy(name, b, sizeof(name) - 1);  // ���ڿ� �ʱ�ȭ�ϴ� ���
//		name[sizeof(name) - 1] = '\0';		 // ���ڿ��� �������ڸ��� Null(\0),ó��
//		age = c;
//	}
//	void getData() {
//		cout << "id : " << id << " name : " << name << " age : " << age << endl;
//	}
//};
//int main()
//{
//	MyClass obj;
//	obj.setData(1, "��ö��", 20);
//	obj.getData();
//   // MyClass obj2(1, "��ö��", 20);
//	return 0;
//}


//	void setData(int a, char *b, int c) { // ���ڿ� ���Ǵ� const char *() �� ����
//		id = a;
//		// �ּ� = rvlaue
//		//name = b;
//		strcpy(name, b);
//		name[0] = 'a';
//		name[1] = 'b';
//		age = c;
//	}