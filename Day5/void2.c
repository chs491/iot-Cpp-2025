///*
//	�Լ� ������2
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int sum(int, int);
//int sub(int, int);
//void func(int(*fp)(int, int));
//
//int main()
//{
//	int res;
//	int n1 = 0;
//	int n2 = 0;
//	void (*fp)(int, int);
//	fp = &func;
//	(*fp)(n1, n2);
//}
//
//int sum(int a, int b)
//{
//	int res = a + b;
//	return res;
//}
//
//int sub(int a, int b)
//{
//	int res;
//	if (a > b) {
//		res = a - b;
//	}
//	else {
//		res = b - a;
//	}
//	return res;
//}
//
//int mul(int a, int b)
//{
//	int res;
//	res = a * b;
//	return res;
//}
//
//int div(int a, int b)
//{
//	int res;
//	if (a > b) {
//		res = a / b;
//	}
//	else {
//		res = b / a;
//	}
//	return res;
//}
//
//void func(int(*fp)(int, int))
//{
//	int x;
//	int n1, n2;
//	int res;
//	printf("���� �Է�(1.���� 2.���� 3.���� 4.������)");
//	scanf("%d", &x);
//	printf("ù��° ���� �Է� : ");
//	scanf("%d", &n1);
//	printf("�ι�° ���� �Է� : ");
//	scanf("%d", &n2);
//	if (x == 1) {
//		fp = sum;
//		res = fp(n1, n2);
//		printf("res : %d", n1 + n2);
//	}
//	else if (x == 2) {
//		fp = sub;
//		res = fp(n1, n2);
//		if (n1 > n2) {
//			printf("res : %d", n1 - n2);
//		}
//		else {
//			printf("res : %d", n2 - n1);
//		}
//
//	}
//	else if (x == 3) {
//		fp = mul;
//		res = fp(n1, n2);
//		printf("res : %d", n1 * n2);
//	}
//	else if (x == 4) {
//		fp = div;
//		res = fp(n1, n2);
//		if (n1 > n2) {
//			printf("res : %d", n1 / n2);
//		}
//		else {
//			printf("res : %d", n2 / n1);
//		}
//	}
//	else {
//		printf("1 ~ 4 ���� �Է� �ٶ�");
//	}
//	return res;
//}