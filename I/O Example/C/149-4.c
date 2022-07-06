#include<stdio.h>
int main()
{
    int result, a=100, b=200, c=300;

    result = a<b ? b++:--c; // a<b 라면 b++(후위연산자), a<b 가 아니라면 --cc(전위 연산자)

    printf("%d, %d, %d\n", result, b, c); // 200, 201, 300 
    // 후위연산자로 인하여 result값이 증가하지 않고, 이후 b값만 1 증가함
} 