class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int count = 0;

        if(n<0)
        {
            return false;
        }

        while(n != 0)
        {
            n = n & (n-1);
            count++;
        }

        return count == 1 ? true : false;
    }
};