class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size(); // size of the nums

        int product = 1; // calcuting product of next elements

        int prefix = 1; // tracking the previous numbers product

        vector<int> ans; // storeing the product of numbers except i th number

        for(int i =0; i<n; i++) // i th number 
        {
            product = 1;

            for(int j =i+1; j<n;j++) // traversing other numbers except i th
            {
                product *= nums[j]; // product calculation
            }

            product *= prefix; // if numbers present on the left 

            prefix*= nums[i]; // calculating left side number product

            ans.push_back(product); // pushing the product into the ans vector
        }

        return ans; // returing the ans vector
    }
};