class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int sum = 0;

        for(int i =0 ;i< 32;i++)
        {
            int count = 0;

            for(auto n : nums)
            {
                count += (n>>i) & 1;
            }
            
            count = count % 3;
            sum = sum |(count << i);

            
        }

        return sum;
        
    }
};