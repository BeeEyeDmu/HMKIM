
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num;      // 변수 선언

    scanf("%d", &num);      // 입력받기

    if (num < 10 || num > 99) {  // 두 자리 10진 정수가 아닌 경우 "none"을 출력
        printf("none");        
    }
    else if (num / 10 == 1) { // 10~19 출력
        switch (num % 10)
        {
        case 0: printf("ten");      break;
        case 1: printf("eleven");   break;
        case 2: printf("twelve");   break;
        case 3: printf("thirteen"); break;
        case 4: printf("forteen");  break;
        case 5: printf("fifteen");  break;
        case 6: printf("sixteen");  break;
        case 7: printf("seventeen"); break;
        case 8: printf("eighteen");  break;
        case 9: printf("nineteen");  break;
        }
    } 
    else {
        // 십의 자리 출력
        switch (num/10)
        {
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("fourty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("sevnety");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
        }

        // 일의 자리 출력
        switch (num % 10)
        {
        case 0: printf("");      break;
        case 1: printf("-one");   break;
        case 2: printf("-two");   break;
        case 3: printf("-three"); break;
        case 4: printf("-four");  break;
        case 5: printf("-five");  break;
        case 6: printf("-six");   break;
        case 7: printf("-seven"); break;
        case 8: printf("-eight"); break;
        case 9: printf("-nine");  break;
        }
    }
}
