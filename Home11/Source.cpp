#include<stdio.h>
void B_test(int);
int main()
{
    int n;
    scanf_s("%d",&n);
    if (n <= 0)
    {
        printf("Error");
    }
    else
    {
        B_test(n);
    }
    return 0;
}
void B_test(int n)
{
    for (int row = 1;row <= n;row++)
    {
        for (int space = n - row; space >= 1; space--)
        {
            printf(" ");
        }
        for (int star = 1;star <= 2 * row - 1;star++)
        {
            printf("*");
        }
        printf("\n");
    }
}