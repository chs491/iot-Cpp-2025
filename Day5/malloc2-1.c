//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char str[100];
//	char* ps[5];
//	printf("���ڿ��� �Է��Ͻÿ�>> ");
//	gets(str);
//	printf("�Է��� ���ڿ� : %s\n", str);
//	
//
//	/* ���ڿ� ���� */
//	ps[0] = (char*)malloc(strlen(str) + 1);		// �Էµ� ���ڿ��� ������ ������ �����κ��� �Ҵ� �޴´�.
//	if (ps == NULL) {
//		exit(1);
//	}
//
//	strcpy(ps, str);		// ���ڿ� ����
//	printf("heap : %s\n", ps);
//
//	free(ps);		// ���� �޸� �Ҵ�
//	return 0;
//}