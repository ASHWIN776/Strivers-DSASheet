#include <bits/stdc++.h>
vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long int>> pascal(n);

    for (int i = 0; i < n; ++i)
    {
        pascal[i] = vector<long long int>(i + 1);
        pascal[i][0] = 1;

        for (int j = 1; j < i; ++j)
        {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }

        pascal[i][i] = 1;
    }

    return pascal;
}
