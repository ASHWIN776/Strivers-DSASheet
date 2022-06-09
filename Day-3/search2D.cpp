#include <bits/stdc++.h>
#include <vector>

bool findTargetInMatrix(vector<vector<int>> &mat, int m, int n, int target)
{
    int row_len = m, col_len = n;

    int k = 0;

    while (k < row_len && mat[k][0] <= target)
    {
        if (mat[k][0] == target)
            return true;
        k++;
    }

    k--;
    if (k == row_len || k < 0)
        return false;

    int left = 0, right = col_len - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (mat[k][mid] == target)
            return true;

        else if (mat[k][mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return false;
}