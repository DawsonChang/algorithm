#include <stdio.h>

int BIN_SEARCH(int A[], int now, int i, int j)
{
    if (i > j)
    {
        return -1;
    }
    int k = (i + j) / 2;
    if (A[k] == now)
    {
        return k;
    }
    else if (A[k] < now)
    {
        return BIN_SEARCH(A, now, k+1, j);
    }
    else
    {
        return BIN_SEARCH(A, now, i, k-1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int d;
    scanf("%d", &d);
    int j = 0;
    int now;
    int result[d];
    while (j < d)
    {
        scanf("%d", &now);
        result[j] = BIN_SEARCH(A, now, 0, n-1);
        j++;
    }

    for(int i = 0; i < d; i++)
    {
        if(result[i] == -1)
        {
            printf("NIEOBECNY\n");
        }
        else
        {
            printf("%d\n", result[i] + 1);
        }
    }
}