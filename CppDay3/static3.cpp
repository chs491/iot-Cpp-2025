/*
	StaticTest라는 클래스를 만드는데 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고 
	3개 입력을 받는 생성자를 작성한다. 회원번호는 자동으로 증가시킬 것이기 때문에.
	출력담당의 showmember() 메서드를 구현하시오.
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
//	static void set_cnt() {  // static 멤버 함수 정의
//		cnt++;
//	}
//	void showmember() {
//		cout << "회원번호: " << cnt << endl;
//		printf("이름: %s, 전화번호: %s, 주소:%s\n", name, phone, addr);
//	}
//};
//
//int StaticTest::cnt = 0;
//
//int main()
//{
//	StaticTest m1("홍길동", "010-1111-1111", "부산");
//	m1.showmember();
//	StaticTest m2("김영희", "010-2222-2222", "부산");
//	m2.showmember();
//	StaticTest m3("김철수", "010-3333-3333", "울산");
//	m3.showmember();
//	return 0;
//}