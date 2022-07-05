#include<stdio.h>
int main()
{
    int j=024, k=24, L=0x24, hap; // 8진수, 10진수, 16진수, 합계
    hap = j+k+L; // 10진수로 변환 후 계산

    printf("%d, %d, %d, %d \n", j, k, L, hap); // 20, 24, 36, 80
} 