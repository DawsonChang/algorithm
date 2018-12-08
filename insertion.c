#include <stdio.h>

int main()
{
    int A[6] = {4, 2, 1, 3, 6, 5};
    int r;
    for (int i = 1; i < 6; i++)
    {
        r = A[i];
        int j = i;
        while(j > 0 && A[j-1] > r)
        {
            A[j] = A[j-1];
            j--;
        }

        A[j] = r;
    }
    for (int k = 0; k < 6; k++)
    {
        printf("%d ", A[k]);
    }
}