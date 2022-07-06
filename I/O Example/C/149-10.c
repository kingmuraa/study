#include<stdio.h>
int main()
{
    int a=5, b=10, c=15, d=30, result;

    result = a * 3 + b > d || c-b / a <= d && 1; // 연산자 우선순위를 잘 생각할 것 
    // 우선순위  높음 단항 > 이항 > 삼항 > 대입 > 순서  우선순위 낮음 //

    printf("%d\n", result); // 1
} 