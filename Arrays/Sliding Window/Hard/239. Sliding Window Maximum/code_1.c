class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        // one base exist

        if(k == 1)
        {
            return nums; // each element will become the max for window of size 1
        }

        int n = nums.size(); // size of the nums


        int maxi = INT_MIN;  // initize with min element

        vector<int> ans; // store the max element in each window


        // for the first k elements

        for(int i =0 ; i<k; i++)
        {
            maxi = max(nums[i] , maxi);
        }
  
        // maxi for first window
        ans.push_back(maxi);

        // slidling window start here
        
        for(int r = 1; r<= n-k; r++)
        {
            // check the incoming element is maximum

            if(nums[r+k-1] > maxi)
            {
                maxi = nums[r+k-1]; // repalce with maxi
                
                ans.push_back(maxi); // push the element into resultant vector

                continue;
            }

            // check the first element in window equal to max

            if(nums[r] == maxi)
            {
                ans.push_back(maxi);

                continue;
            }

            // check the previous element , that outgoing element is maxi

            if(nums[r-1] == maxi)
            {
                // maxi is no long in window 

                maxi = INT_MIN;

                for(int j =0;j<k;j++)
                {
                    maxi = max(maxi,nums[r+j]);
                }

                ans.push_back(maxi);
            }
            else
            {
                // maxi exist in the middle of the window
                ans.push_back(maxi);
            }
        }

        // return the ans (resultant vector)
        return ans;
        
    }
};