///*
//	함수 포인터
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
//	//int (*fp)(int, int);
//	//int res;
//	////int res2;
//	////res1 = sum(10,20);
//	////res2 = sub(10, 20);
//	//fp = sum;
//	//res = fp(20, 10);
//	//printf("res : %d\n", res);
//	////printf("res2 : %d\n", res2);
//	//return 0;
//	int res;
//	void (*fp)(int, int);
//	fp = &func;
//	(*fp)(20, 10);
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
//	printf("연산 입력(1.덧셈 2.뺄셈 3.곱셈 4.나눗셈)");
//	scanf("%d", &x);
//	printf("첫번째 수를 입력 : ");
//	scanf("%d", &n1);
//	printf("두번째 수를 입력 : ");
//	scanf("%d", &n2);
//	if (x == 1) {
//		fp = sum;
//		res = fp(n1, n2);
//		printf("res : %d", n1 + n2);
//	}
//	else if (x == 2) {
//		fp = sub;
//		res = fp(n1, n2);
//		if (n1 > n2){
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
//		printf("1 ~ 4 수만 입력 바람");
//	}
//	return res;
//}