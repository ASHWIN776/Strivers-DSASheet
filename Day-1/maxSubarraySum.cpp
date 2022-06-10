#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long max_sum = INT_MIN, sum = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];

        if (sum > max_sum)
            max_sum = sum;

        if (sum < 0)
            sum = 0;
    }

    return max_sum < 0 ? 0 : max_sum;
}