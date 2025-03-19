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
//	void setData(int a, const char *b, int c) { // 문자열 정의는 const char *() 로 정의
//		id = a;
//		strncpy(name, b, sizeof(name) - 1);  // 문자열 초기화하는 방법
//		name[sizeof(name) - 1] = '\0';		 // 문자열의 마지막자리는 Null(\0),처리
//		age = c;
//	}
//	void getData() {
//		cout << "id : " << id << " name : " << name << " age : " << age << endl;
//	}
//};
//int main()
//{
//	MyClass obj;
//	obj.setData(1, "김철수", 20);
//	obj.getData();
//   // MyClass obj2(1, "김철수", 20);
//	return 0;
//}


//	void setData(int a, char *b, int c) { // 문자열 정의는 const char *() 로 정의
//		id = a;
//		// 주소 = rvlaue
//		//name = b;
//		strcpy(name, b);
//		name[0] = 'a';
//		name[1] = 'b';
//		age = c;
//	}