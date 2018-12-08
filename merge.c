#include <stdio.h>

void MERGE(int A[], int p, int q, int r)
{
    int n = q - p + 1;
    int m = r - q;
    int B[n+1], C[m+1];
    int i, j;

    for(i = 0; i < n; i++)
    {
        B[i] = A[p+i];
    }
    for(j = 0; j < m; j++)
    {
        C[j] = A[q+j+1];
    }
    B[n]=99999;
    C[m]=99999;
    i = 0;
    j = 0;

    for (int k = p; k < r+1; k++)
    {
        if (B[i] <= C[j])
        {
            A[k] = B[i];
            i++;
        }
        else
        {
            A[k] = C[j];
            j++;
        }
    }
}

void MERGESORT(int A[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        MERGESORT(A, p, q);
        MERGESORT(A, q+1, r);
        MERGE(A, p, q, r);
    }

}
int main()
{

    int A[8] = {3, 41, 52, 26, 38, 57, 9, 49};

    MERGESORT(A, 0, 7);

    for (int a = 0; a < 8; a++)
    {
        printf("%d ", A[a]);
    }
}