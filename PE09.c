// 재귀적 팩토리얼 함수
#include <stdio.h>

long factorial(int n);

int main(void)
{
    int n = 0;
    long f;

    printf("정수를 입력하시오:");
    scanf_s("%d", &n);
    printf("%d!은 % d입니다. \n", n, factorial(n));
    return 0;
}

long factorial(int n)
{
    printf("factorial(%d)\n", n);

    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);

    }
}