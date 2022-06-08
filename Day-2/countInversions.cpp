#include <bits/stdc++.h>

int Merge(long long *arr, int start, int mid, int last)
{
    int n1 = mid - start + 1, n2 = last - mid, inversions = 0;
    long long leftArr[n1], rightArr[n2];

    for (int i = 0; i < n1; ++i)
    {
        leftArr[i] = arr[start + i];
    }

    for (int i = 0; i < n2; ++i)
    {
        rightArr[i] = arr[mid + i + 1];
    }

    int i, j, k = start;
    i = j = 0;

    while (i < n1 && j < n2)
    {
        if (leftArr[i] > rightArr[j])
        {
            inversions += (n1 - i);
            arr[k++] = rightArr[j++];
        }

        else
            arr[k++] = leftArr[i++];
    }

    while (i < n1)
    {
        arr[k++] = leftArr[i++];
    }

    while (j < n2)
    {
        arr[k++] = rightArr[j++];
    }

    return inversions;
}

long long MergeSort(long long *arr, int start, int last)
{
    long long inversions = 0;
    if (start == last)
        return 0;

    int mid = start + (last - start) / 2;
    inversions += MergeSort(arr, start, mid);
    inversions += MergeSort(arr, mid + 1, last);
    inversions += Merge(arr, start, mid, last);

    return inversions;
}

long long getInversions(long long *arr, int n)
{
    // Write your code here.
    long long inversions = 0;

    inversions = MergeSort(arr, 0, n - 1);

    return inversions;
}