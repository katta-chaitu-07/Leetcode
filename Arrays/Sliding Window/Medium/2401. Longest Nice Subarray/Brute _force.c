class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {

        int n = nums.size();
        int len = 1;

        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                bool valid = true;

                // Check every pair inside [i...j]
                for(int k = i; k <= j; k++)
                {
                    for(int l = k + 1; l <= j; l++)
                    {
                        if((nums[k] & nums[l]) != 0)
                        {
                            valid = false;
                            break;
                        }
                    }

                    if(!valid)
                        break;
                }

                if(valid)
                {
                    len = max(len, j - i + 1);
                }
            }
        }

        return len;
    }
};