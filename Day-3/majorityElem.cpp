#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n)
{
    int element = 0;

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (count == 0)
        {

            element = arr[i];
        }

        if (arr[i] == element)
        {

            count++;
        }

        else
        {

            count--;
        }
    }

    int ct = 0;

    for (int i = 0; i < n; i++)
    {

        if (element == arr[i])
        {

            ct++;
        }
    }

    if (ct > floor(n / 2))

        return element;

    else

        return -1;
}