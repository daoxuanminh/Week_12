#include <stdio.h>

void get_sale(int *a, int n);
int total_sale(int *a, int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    get_sale(a, n);
    printf("%d\n", total_sale(a, n));
    return 0;
}

void get_sale(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int total_sale(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
