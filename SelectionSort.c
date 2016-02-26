void SelectionSort(int A[], int n)
{
    int i, j, small, temp;
    for (i=0; i<n-1; i++){
        /* 将 small 置为剩余最小元素第一次
        出现时的下标 */
        small = i;
        for (j=i+1; j<n; j++)
            if (A[j] < A[small])
                small = j;
        /* 到达这里时，small 是 A[i..n-1] 
        中第一个最小元素的下标 */
        /* 现在交换 A[small] 与 A[i]。*/
        temp = A[small];
        A[small] = A[i];
        A[i] = temp;
    }
}
