#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int freq_arr[3] = {0};

    for (int i = 0; i < n; ++i)
    {
        freq_arr[arr[i]]++;
    }
    int k = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (freq_arr[i] > 0)
        {
            while (freq_arr[i])
            {
                arr[k++] = i;
                freq_arr[i]--;
            }
        }
    }
}