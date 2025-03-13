/* 
	대문자 소문자 전환
*/
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int main()
//{
//    char ch1;
//    char ch2;
//
//    printf("문자를 입력하시오(a ~ z 또는 A ~ Z) : ");
//    scanf_s(" %c", &ch1);  // 공백 추가하여 이전 입력 버퍼의 개행 문자 방지
//
//    if (ch1 >= 'A' && ch1 <= 'Z') {
//        ch2 = ch1 + ('a' - 'A');  // 대문자를 소문자로 변환
//    }
//    else if (ch1 >= 'a' && ch1 <= 'z') {
//        ch2 = ch1 + ('A' - 'a');  // 소문자를 대문자로 변환
//    }
//    else {
//        printf("잘못된 입력입니다.\n");
//        return 1;  // 프로그램 종료
//    }
//
//    printf("입력한 문자 : %c\n", ch1);
//    printf("변환된 문자 : %c\n", ch2);
//
//    return 0;
//}