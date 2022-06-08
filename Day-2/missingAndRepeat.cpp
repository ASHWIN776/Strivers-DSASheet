#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    int freq[n + 1];
    pair<int, int> ret;

    for (int i = 1; i <= n; ++i)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < n; ++i)
    {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= n; ++i)
    {
        if (freq[i] == 0)
            ret.first = i;
        if (freq[i] == 2)
            ret.second = i;
    }

    return ret;
}
