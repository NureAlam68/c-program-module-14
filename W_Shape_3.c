// Given a number N. Print a diamond that has 2N rows.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // upper side
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    // lower side
    star -= 2; 
    space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }

    return 0;
}
