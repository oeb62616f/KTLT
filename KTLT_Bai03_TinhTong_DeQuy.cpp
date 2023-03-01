/*

Project: KTLT_Bai02_TinhTong_DeQuy.cpp
    - Nguyen Gia Bao: Do all of them with the help of his teacher

Aim:

Solution:


Date: 23/07/2004

*/

// Include
#include <stdio.h>

// Creating functions
double sum(float a, int n);
int total_sum(int n);
// Creating variables
float a;
int n;

// Main
int main()
{
    printf("Value of a: ");
    scanf("%f", &a);
    printf("Value of n: ");
    scanf("%d", &n);

    printf("Sum: %lf", sum(a,n));

    return 1;
}


double sum(float a, int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sum(a,n - 1) + a / total_sum(n);
}

int total_sum(int n)
{
    return n * (1 + n) / 2;
}