#include<bits/stdc++.h>
bool checkOverlappingIntervals(long* start, long* end, int n)
{
    //Write your code here 
    vector<pair<long,long>> intervals;
    for(int i = 0; i<n; i++)
        intervals.push_back({start[i],end[i]});
        sort(intervals.begin(),intervals.end());
        for(int i = 1; i<n; i++){
            if (intervals[i].first <intervals[i-1].second)
                return true;
        }
        return false;
    
}
/*  vector<pair<int, int>> intervals(n);

    for (int i = 0; i < n; ++i)
    {
        intervals[i].first = start[i];
        intervals[i].second = end[i];
    }

    // Sorting the interval on the basis of start times.
    sort(intervals.begin(), intervals.end());

    for (int i = 0; i < n - 1; ++i)
    {
        // Interval at index i and i + 1 will overlap.
        // This is because ith interval ends after (i + 1)th starts
        if (intervals[i].second > intervals[i + 1].first)
        {
            return true;
        }
    }

    // No overlapping interval exists.
    return false;
}
*/
