/*
	(deep copy)복사생성자
    동적할당 받은 경우 복사하는 객체도 동적 할당 받아서 별개로 복사하여 저장되어야 한다.
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>  // strcpy, strlen 사용을 위해 추가
//
//class Person {
//private:
//    char* name;  // 포인터로 변경하여 동적 할당
//    int age;
//public:
//    Person() : name(nullptr), age(0) {}  // 기본 생성자 초기화
//
//    Person(const char* pname, int age) {
//        printf("constructor call!!!\n");
//        this->name = new char[strlen(pname) + 1];  // 동적 할당
//        strcpy(this->name, pname);
//        this->age = age;
//    }
//
//    Person(const Person& other) {  // 복사 생성자
//        printf("copy constructor!!\n");
//        this->age = other.age;
//        this->name = new char[strlen(other.name) + 1];  // 깊은 복사 수행
//        strcpy(this->name, other.name);
//    }
//
//    void printPerson() {
//        printf("name : %s, age : %d\n", this->name, this->age);
//    }
//
//    ~Person() {
//        delete[] this->name;  // 동적 할당된 메모리 해제
//    }
//};
//
//int main()
//{
//    Person p("홍길동", 30);
//    p.printPerson();
//
//    Person p2(p);  // 복사 생성자 호출
//    p2.printPerson();
//
//    Person p3 = p;  // 복사 생성자 호출
//    p3.printPerson();
//
//    return 0;
//}
/*
    디폴트로 자동으로 제공받는 생성자 : 디폴트 생성자, 복사 생성자, 소멸자
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