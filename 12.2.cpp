#include <stdio.h>

double * maximum(double *a, int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    double a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
    if (maximum(a, n) != NULL)
        printf("Max = %lf\n", *maximum(a, n));
    else
        printf("The array is empty!\n");
    return 0;
}

double * maximum(double *a, int n)
{
    double *max = NULL;
    for (int i = 0; i < n; i++)
    {
        if (max == NULL)
            max = &a[0];
        if (*max < a[i])
            max = &a[i];
    }
    return max;
}
