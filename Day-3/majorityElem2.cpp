#include <bits/stdc++.h>
vector<int> majorityElementII(vector<int> &nums)
{
    int n = nums.size();
    vector<int> list;
    int c1 = 0, c2 = 0, num1 = -1, num2 = -1;

    for (int i = 0; i < n; ++i)
    {
        int curr = nums[i];
        if (curr == num1)
            c1++;

        else if (curr == num2)
            c2++;

        else if (c1 == 0)
        {
            num1 = curr;
            c1++;
        }

        else if (c2 == 0)
        {
            num2 = curr;
            c2++;
        }

        else
        {
            c1--;
            c2--;
        }
    }

    // checking
    c1 = 0, c2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] == num1)
            c1++;
    }

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] == num2)
            c2++;
    }

    if (c1 > n / 3)
        list.push_back(num1);
    if (num1 != num2 && c2 > n / 3)
        list.push_back(num2);

    return list;
}