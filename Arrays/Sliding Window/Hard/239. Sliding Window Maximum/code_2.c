class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        // size of nums
        int n = nums.size();

        // ans(vector) declaration
        vector<int> ans;

        //Deque declaration
        deque<int> dq;

        // max element
        int maxi = INT_MIN;


        // process all the windows

        for(int r =0;r<n; r++)
        {
            // Maintain decreasing order
            while(!dq.empty() && nums[dq.back()] <= nums[r])
            {
                dq.pop_back();
            }

            // remove the outgoing element 
            while(!dq.empty() &&  dq.front() <= (r-k))
            {
                dq.pop_front();
            }
           
            // insert the index of current element
            dq.push_back(r);

            // window ready

            if(r>= (k-1))
            {
                ans.push_back(nums[dq.front()]);
            }
        }
        

        // return the resultant ans
        return ans;
    }
};