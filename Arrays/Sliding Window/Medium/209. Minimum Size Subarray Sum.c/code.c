class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        // size of the nums 

        int n = nums.size();

        // length 

        int len = INT_MAX;

        // sum calcualtion

        int sum = 0;

        // start pointer 

        int l =0;

        // window expansion

        for(int r =0;r<n;r++)
        {
            // expand window
            sum+=nums[r];

            // shrink window
            while(sum>=target)
            {
                // calculate the length of window
                len = min(len,(r-l)+1);
                
                // subtract the start pointer from the summ
                sum -= nums[l];

                // move forward
                l++;
            }
        }

     return (len == INT_MAX) ? 0 : len;
        
    }
};