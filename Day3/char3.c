/* 
	�빮�� �ҹ��� ��ȯ
*/
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int main()
//{
//    char ch1;
//    char ch2;
//
//    printf("���ڸ� �Է��Ͻÿ�(a ~ z �Ǵ� A ~ Z) : ");
//    scanf_s(" %c", &ch1);  // ���� �߰��Ͽ� ���� �Է� ������ ���� ���� ����
//
//    if (ch1 >= 'A' && ch1 <= 'Z') {
//        ch2 = ch1 + ('a' - 'A');  // �빮�ڸ� �ҹ��ڷ� ��ȯ
//    }
//    else if (ch1 >= 'a' && ch1 <= 'z') {
//        ch2 = ch1 + ('A' - 'a');  // �ҹ��ڸ� �빮�ڷ� ��ȯ
//    }
//    else {
//        printf("�߸��� �Է��Դϴ�.\n");
//        return 1;  // ���α׷� ����
//    }
//
//    printf("�Է��� ���� : %c\n", ch1);
//    printf("��ȯ�� ���� : %c\n", ch2);
//
//    return 0;
//}