#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    return 0;
}

void SelectionSort(int A[], int n)
{
    int i, j, small, temp;
    for (i=0;i<n-1;i++){
        small = i;
        for (j=i+1;j<n;j++)
            if (A[j] < A[small])
                small = j;
        temp = A[small];
        A[small] = A[i];
        A[i] = temp;
    }
}

