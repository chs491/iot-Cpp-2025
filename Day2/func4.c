/*
	함수 원형
	함수 원형, 함수 호출, 함수 정의
*/
#include <stdio.h>

//int func(int, int);		// 함수선언, 함수원형
//
//int main() 
//{
//	int result = func(10, 20);
//	printf("호출 후 리턴된 값 : %d\n", result);
//	return 0;
//}
//
//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}

int func1(int a, int b)
{
	
	return scanf_s("%d %d", &a, &b);

}

int add(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

int times(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}

char func2(int a, int b, char c)
{
	if (c == '+')
		add(a,b);
	else if (c == '-')
		minus(a,b);
	else if (c == '*')
		 times(a,b);
	else if (c == '/')
		divide(a,b);
}

int main()
{
	int x;
	int y;
	char z;
	printf("계산기 프로그램입니다.\n");
	printf("두개의 정수를 입력하세요.\n", func1(x, y));
	printf("연산자를 입력하세요.\n", func2(x, y, z));
	return 0;
}