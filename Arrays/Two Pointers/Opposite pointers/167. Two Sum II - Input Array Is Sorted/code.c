class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        // size of the numbers vector
        int n =numbers.size();
        
        //left pointer
        int i =0;

        // right pointer
        int j =n-1;

        
        while(i<j)
        {

            // find the sum of the left & right pointer
            int sum =numbers[i]+numbers[j];

            // if sum is target return the position(i+1,j+1)
            if(sum==target)
            {
                return {i+1,j+1};
            }
            else if(sum<target) 
            {
                i++; // move the left pointer forward 
            }
            else if(sum>target)
            {
                j--; // move the right pointer backward 
            }
        }

        return {}; // if target is not exist..
    }
};