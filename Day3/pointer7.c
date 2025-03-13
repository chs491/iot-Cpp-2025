/*
	const
*/
//#include <stdio.h>
//
//int main()
//{
//	const int num = 10;
//	//num = 20;
//
//	int num2 = 10;
//	num2 = 20;
//	int* pnum2 = &num2;
//	*pnum2 = 30;
//	printf("%d\n", num2);
//
//	const int* pn2 = &num2; // 데이터 상수(포인터변수를 통한 데이터의 변경을 불허한다.)
//	num2 = 0;
//	pn2 = &num2;
//	//*pn2 = 100;
//
//	int num3 = 40;
//	int* const pnum3 = &num3; // 포인터 상수(포인터 변수가 가리키는 주소의 변경을 불허한다.)
//	*pnum3 = 100;
//	printf("%d", num3);
//	//pnum3 = &num2;
//
//	const int* pn5 = &num2;
//	//*pn5 = 1000;
//	//pn5 = &num3;
//	num2 = 40;
//
//	return 0;
//}