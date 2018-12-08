#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int n = 6;
    int A[] = {4, 2, 1, 3, 6, 5};

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (A[j] > A[j+1])
            {
                swap(&A[j], &A[j+1]);
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", A[k]);
    }
}