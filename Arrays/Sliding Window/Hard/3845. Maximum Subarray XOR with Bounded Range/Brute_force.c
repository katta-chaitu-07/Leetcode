class Solution {
public:
    int maxXor(vector<int>& nums, int k) {
        
        int n = nums.size();  // size of the nums;

        int mini = INT_MAX; // track the minimum

        int maxi = INT_MIN; // track the maximum

        int ans = 0; // target answer

        // Brute force approach

        for(int i =0; i<n; i++)
        {
            int maxi = INT_MIN;

            int mini = INT_MAX;

            
            for(int j=i; j<n; j++)
            {
                int total = 0; 

                maxi = max(maxi, nums[j]); // maximum
                mini = min(mini, nums[j]); // minimum

                if((maxi - mini) <= k)
                {
                    for(int r =i;r<=j; r++)
                    {
                        total = total^nums[r]; // calculating xor for all elements
                    }

                     ans = max(ans,total); // find the max value of subarray
                }

            }
        }

        return ans; // target 
    }
};