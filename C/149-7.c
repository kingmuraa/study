#include<stdio.h>
int main()
{
    int i=5, j=4, k=1, L, m;

    L = i > 5 || j !=0; // || == OR 연산자(하나라도 참이면 참)
    m = j <= 4 && k < 1; // && == AND 연산자(둘다 참일 때 참)

    printf("%d, %d\n", L,m); // 1, 0
} 