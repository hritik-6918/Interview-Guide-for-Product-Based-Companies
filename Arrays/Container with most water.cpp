int maxArea(vector<int>& height) {
    // Write your code here.
    int left = 0;
    int right = height.size()-1;
    int area = 0;
   while(left<right){
       area = max(area,min(height[left],height[right]) *(right-left));
       if(height[left]<height[right])
           left++;
       else
           right--;
   }
    return area;
}
/*      int n = height.size();

        // Variable to store max area initialised as a negative vlaue.
        int globalMax = -1;

        for (int i = 0; i < n; i++) {

            for (int j = n - 1; j > i; j--) {

                int area = (j - i) * min(height[i], height[j]);

                globalMax = max(globalMax, area);
            }
        }
        return globalMax;
*/
