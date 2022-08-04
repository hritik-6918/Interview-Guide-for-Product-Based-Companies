#include <bits/stdc++.h>

vector<int> smallestSubarrayWithKDistinct(vector<int> &arr, int k)
{
    int n = arr.size();
   
    // Starting and ending  index of resultant subarray
    int start = 0, end = n;

    // Selecting each element as the start index for subarray
    for (int i = 0; i < n; i++)
    {
        // Initialize a set to store all distinct elements
        unordered_set<int> set;

        // Selecting the end index for subarray
        int j;
        for (j = i; j < n; j++)
        {
            set.insert(arr[j]);
            
            /*
            If set contains exactly k elements, 
            then check subarray[i, j] is smaller in size than the current resultant subarray  
            */
            if (set.size() == k)
            {
                if (j - i < end - start)
                {
                    start = i;
                    end = j;
                }

                // There are already k distinct elements now, no need to consider furthur elements
                break;
            }
        }

        // If there are no k distinct elements left in the array starting from index i we will break
        if (j == n)
        {
            break;
        }
    }
    
    vector<int> ans;

    // There is no subarray with K distinct elements
    if (end == n)
    {
        ans.push_back(-1);
    }
    else
    {
        // Subarray found
        ans.push_back(start);
        ans.push_back(end);
    }
    
    return ans;
}
