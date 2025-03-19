//#define _CRT_SECURE_NO_WARNINGS  // strcpy() 등의 경고 방지
//#include <iostream>
//#include <cstring>  // strcpy() 사용을 위한 라이브러리
//using namespace std;
//
//class MyClass {
//private:
//    int id;
//    char* name;  // 문자열을 저장할 동적 할당 포인터
//    int age;
//
//public:
//    // 기본 생성자
//    MyClass() {
//        name = nullptr;  // 초기화
//    }
//
//    // 매개변수가 있는 생성자
//    MyClass(int a, const char* b, int c) {
//        id = a;
//        age = c;
//        name = new char[strlen(b) + 1];  // 문자열 크기만큼 동적 할당
//        strcpy(name, b);  // 문자열 복사
//    }
//
//    // 소멸자 (동적 할당된 메모리 해제)
//    ~MyClass() {
//        delete[] name;  // 동적 할당된 문자열 삭제
//    }
//
//    // 데이터 출력 함수
//    void getData() {
//        cout << "id : " << id << " name : " << name << " age : " << age << endl;
//    }
//};
//
//int main() {
//    MyClass obj(1, "김철수", 20);  // 객체 생성
//    obj.getData();  // 데이터 출력
//
//    return 0;
//}