#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 숫자 n의 약수의 갯수와 n을 소인수 분해했을 때 소인수의 지수의 합을 구하는 함수
// nDiv : 숫자 n의 약수의 갯수
// nExp : 숫자 n의 소인수 지수의 합
void nDivisor(int n, int *nDiv, int *nExp)
{
    printf("\nnDivisor(%d)\n", n);
    *nDiv = 1;
    *nExp = 0;

    for (int i = 2; i <= n; i++)
        if (n % i == 0) {   
            int exp = 0;    // 소인수 지수의 갯수
            while (n % i == 0) {
                printf("  n=%d, div=%d\n", n, i);
                n /= i;
                exp++;
            }    
            *nDiv *= (exp + 1);
            *nExp += exp;
        }

    printf("약수의 갯수 = %d, 약수 지수의 합 = %d\n", *nDiv, *nExp);
}

int main()
{
    int n, m;
    int max_count = 0, max_num = 0, max_exp = 0;          // 변수 선언
    int nDiv = 0;       // 약수의 갯수(number of Divisors)
    int nExp = 0;       // 소인수 지수의 합(number of Exponents)

    scanf("%d %d", &n, &m);
    for (int i = n; i <= m; i++) {
        nDivisor(i, &nDiv, &nExp);  // 함수에서 2개의 값을 구해야 하므로 주소를 보냄
        if (max_count < nDiv) {
            max_count = nDiv;
            max_num = i;
        }
    }
    printf("결과 : (%d)(%d)(%d)", max_num, nDiv, nExp);
}