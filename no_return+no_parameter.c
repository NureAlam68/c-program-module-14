#include <stdio.h>

void sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    printf("sum: %d\n", ans);
}

void sub()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a - b;
    printf("sub: %d", ans);
}

int main()
{
    sum();
    sub();
    return 0;
}