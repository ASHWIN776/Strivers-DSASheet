#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> vect;
    vector<int> interval(2);

    int min_here = intervals[0][0], max_here = intervals[0][1];
    int k = 0;
    for (int i = 1; i < intervals.size(); ++i)
    {
        if (min_here > intervals[i][0])
        {
            min_here = intervals[i][0];
        }

        if (max_here >= intervals[i][0] && max_here <= intervals[i][1])
        {
            max_here = intervals[i][1];
        }

        else if (max_here < intervals[i][0])
        {
            if (k > 1)
            {
                vect.resize(k);
            }
            interval[0] = min_here;
            interval[1] = max_here;
            vect.push_back(interval);

            min_here = intervals[i][0];
            max_here = intervals[i][1];
        }
    }
    interval[0] = min_here;
    interval[1] = max_here;
    vect.push_back(interval);
    return vect;
}
