// Given a number N. Print a face down right angled triangle that has N rows.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}