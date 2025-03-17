//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char str[100];
//	char* ps[5];
//	printf("문자열을 입력하시오>> ");
//	gets(str);
//	printf("입력한 문자열 : %s\n", str);
//	
//
//	/* 문자열 저장 */
//	ps[0] = (char*)malloc(strlen(str) + 1);		// 입력된 문자열을 저장할 공간을 힙으로부터 할당 받는다.
//	if (ps == NULL) {
//		exit(1);
//	}
//
//	strcpy(ps, str);		// 문자열 복사
//	printf("heap : %s\n", ps);
//
//	free(ps);		// 동적 메모리 할당
//	return 0;
//}