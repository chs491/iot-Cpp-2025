///*
//	struct(구조체) - 사용자 정의 자료형
//	가존 자료형을 묶어서 만든 복합 자료형(타입)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Human{		// 구조체 선언 struct 구조체명
//	char name[100]; // 멤버변수
//	int age;		// 멤버변수
//}; 
//
//int main()
//{
//	/* . 멤버 접근연산자 */
//	struct Human h;		// 구조체 human 구조체의 변수 h 선언
//	h.age = 30;			// h객체의 멤버 age에 30을 저장한다.
//	//h.name = "chs";
//	strcpy(h.name, "chs");
//	printf("이름 : %s, 나이 : %d", h.name, h.age);
//
//	//char str[100] = "chs";
//	//printf("%s\n", str);
//	//char str2[100];
//	//str2 = "kim chulsul";
//	
//
//
//	return 0;
//}