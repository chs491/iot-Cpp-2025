/*
	�Լ� ����
	�Լ� ����, �Լ� ȣ��, �Լ� ����
*/
#include <stdio.h>

//int func(int, int);		// �Լ�����, �Լ�����
//
//int main() 
//{
//	int result = func(10, 20);
//	printf("ȣ�� �� ���ϵ� �� : %d\n", result);
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
	printf("���� ���α׷��Դϴ�.\n");
	printf("�ΰ��� ������ �Է��ϼ���.\n", func1(x, y));
	printf("�����ڸ� �Է��ϼ���.\n", func2(x, y, z));
	return 0;
}