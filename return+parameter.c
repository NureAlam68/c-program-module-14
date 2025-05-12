#include <stdio.h>

int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}

int sub(int num1, int num2)
{
    int ans = num1 - num2;
    return ans;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int val1 = sum(a, b);
    int val2 = sub(a, b);
    printf("sum: %d\nsub: %d", val1,val2);
    return 0;
}