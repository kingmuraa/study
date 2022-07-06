#include<stdio.h>
int main()
{
    int i = 10, j=10, k=30;
    i /= j; // 1
    j -= i; // 9
    k %= j; // 3

    printf("%d, %d, %d \n", i, j, k); // 1, 9, 3
} 