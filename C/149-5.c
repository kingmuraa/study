#include<stdio.h>
int main()
{
    int i, j;
    scanf("%o#%x", &i, &j); // Octal = 8진수, Hexadecimal = 16진법, 15#22
    printf("%d %d", i, j);  // 13, 34 
    // 10진수로 변환하여 계산
} 