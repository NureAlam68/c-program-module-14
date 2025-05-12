#include <stdio.h>

void sum(int a, int b)
{
    int ans = a + b;
    printf("sum: %d\n", ans);
}

void sub(int a, int b)
{
    int ans = a - b;
    printf("sub: %d", ans);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a,b);
    sub(a,b);
    return 0;
}