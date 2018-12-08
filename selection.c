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
    int min_index;
    for (int i = 0; i < n-1; i++)
    {
        min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[min_index] > A[j])
            {
                min_index = j;
            }
        }
    swap(&A[min_index], &A[i]);

    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", A[k]);
    }
}