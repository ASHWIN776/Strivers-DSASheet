#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n)
{
    int freq[arr.size()], repeat;

    for (int i = 1; i < n; ++i)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < arr.size(); ++i)
    {
        freq[arr[i]]++;

        if (freq[arr[i]] > 1)
            repeat = arr[i];
    }

    return repeat;
}
