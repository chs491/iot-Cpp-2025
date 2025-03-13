//#include <stdio.h>
//
//void printAry(int*, int);
//
//
//int main()
//{
//	int ary[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int ary2[] = { 1,2,3 };
//	int size = sizeof(ary2) / sizeof(ary2[0]);
//	inputAry(ary, size);
//	printAry(ary, size);
//
//	return 0;
//}
//
//void printAry(int *p, int _size)
//{
//	for (int i = 0; i < _size; i++) {
//		printf("p[%d] = %d\n",i, p[i]);
//	}
//}
//
//void inputAry(int** p, int *count)
//{
//	printf("배열의 크기를 입력하시오");
//	scanf_s("%d", count);
//	printf("%d개의 원소를 입력하시오 : ", *count);
//	for (int i = 0; i < *count; i++) {
//		scanf_s("&d", &(*p)[i]);
//	}
//}
