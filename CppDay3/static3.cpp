/*
	StaticTest��� Ŭ������ ����µ� ��������δ� �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt)�� ������ 
	3�� �Է��� �޴� �����ڸ� �ۼ��Ѵ�. ȸ����ȣ�� �ڵ����� ������ų ���̱� ������.
	��´���� showmember() �޼��带 �����Ͻÿ�.
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class StaticTest {
//private:
//	char name[20];
//	char phone[100];
//	char addr[100];
//	static int cnt;
//public:
//	StaticTest() {}
//	StaticTest(const char* a, const char* b, const char* c) {
//		strcpy(name, a);
//		strcpy(phone, b);
//		strcpy(addr, c);
//		set_cnt();
//	}
//	static void set_cnt() {  // static ��� �Լ� ����
//		cnt++;
//	}
//	void showmember() {
//		cout << "ȸ����ȣ: " << cnt << endl;
//		printf("�̸�: %s, ��ȭ��ȣ: %s, �ּ�:%s\n", name, phone, addr);
//	}
//};
//
//int StaticTest::cnt = 0;
//
//int main()
//{
//	StaticTest m1("ȫ�浿", "010-1111-1111", "�λ�");
//	m1.showmember();
//	StaticTest m2("�迵��", "010-2222-2222", "�λ�");
//	m2.showmember();
//	StaticTest m3("��ö��", "010-3333-3333", "���");
//	m3.showmember();
//	return 0;
//}