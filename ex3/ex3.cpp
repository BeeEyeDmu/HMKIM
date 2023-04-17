// ex3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char old_ch, new_ch;
    int index;         // 변수 선언

    scanf("%c %d", &old_ch, &index);      // 입력받기

    if (old_ch >= 'a' && old_ch <= 'z') {   // 소문자인 경우
        new_ch = 'a' + ((old_ch - 'a' + index) % ('z' - 'a' + 1));
        printf("%c", new_ch);
    }
    else if ('A' <= old_ch && old_ch <= 'Z') {// 대문자인 경우
        new_ch = 'A' + ((old_ch - 'A' + index) % ('Z' - 'A' + 1));
        printf("%c", new_ch);
    }
    else                                 // 알파벳이 아닌 경우
        printf("%c", old_ch);                  // 입력받은 문자를 그냥 출력한다
}
