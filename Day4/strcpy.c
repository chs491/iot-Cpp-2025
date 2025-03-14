///*
//	strcpy - 문자열 복사 함수
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[100] = "orange";
//	char str2[100] = "apple";
//	char* ps = "apple";
//
//	printf("str : %s\n", str);
//	printf("str2 : %s\n", str2);
//
//	strcpy(str, str2);		// strcpy(복사, 원본)
//	printf("str : %s\n", str);
//	printf("str2 : %s\n", str2);
//
//	strcpy(str, "banana");
//	printf("str : %s\n", str);
//
//	strcpy(str, ps);
//	printf("str : %s\n", str);
//
//	//strcpy(ps, str2);
//	//printf("ps : %s", ps);
//
//	strncpy(str, "abcd", 3);	// 시작주소부터 복사할 문자갯수를 설정할 수 있다.
//	printf("%s\n", str);
//
//	return 0;
//}
//
//void myStrCopy1(char x, char y)
//{
//	x = y;
//	puts(x);
//}
//
//void myStrCopy2(char *x, const char *y)
//{
//	char* p = x;
//	while (*y) {
//		*x++ = *y++;
//	}
//	*x = NULL;
//	return x;
//}