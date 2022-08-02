int flipBits(int* arr, int n) 
{
    // WRITE YOUR CODE HERE
    int count = 0, x = 0, maxCount =0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == 0)
            count++;
        else
            {
           count--;
            x++;
        }
        if(count>maxCount)
            maxCount = count;
        if(count<0)
            count = 0;
    }
    return (maxCount+x);
}
// Brute force
/*  int maxValue = 0;
    int totalOnes = 0;
    
    // Consider all SubArrays by using two nested two loops
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == 1) 
        {
            totalOnes++;
        }
        int count1 = 0, count0 = 0;
        for (int j = i; j < n; j++) 
        {
            if (arr[j] == 1) 
            {
                count1++;
            } 
            else 
            {
                count0++;
            }
            maxValue = max(maxValue, count0 - count1);
        }
    }
    int result = totalOnes + maxValue;
    return result;
    */
