#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    return ans;
}

int sub()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a - b;
    return ans;
}

int main()
{
    int val1 = sum();
    int val2 = sub();
    printf("sum: %d\nsub: %d", val1,val2);
    return 0;
}