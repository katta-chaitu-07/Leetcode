class Solution {
public:
    int candy(vector<int>& ratings) {

        // count the children

        int n = ratings.size();

        // give one candy to each children

        vector<int> candy(n,1);

        
        // process from left to right 

        for(int i = 1; i<n;i++)
        {
            if(ratings[i] > ratings[i-1])
            {
                candy[i] = candy[i-1] + 1;
            }
        }


        // process from right to left

        for(int i = n-2;i>=0;i--)
        {
            if(ratings[i]> ratings[i+1])
            {
                candy[i] =max( candy[i],candy[i+1] + 1);
            }
        }


        // count the total number of candies

        int total =0;

        for(auto x : candy)
        {
            total+=x;
        }


        // return the total 

        return total;
        
    }
};