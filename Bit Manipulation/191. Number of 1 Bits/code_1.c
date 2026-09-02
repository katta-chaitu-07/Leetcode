class Solution {
public:
    int hammingWeight(int n) {

        int count = 0; // for counting the number of ones 

        while(n)
        {
            count++;

            n = n & (n-1);   // Trick to remove the one bit 
        }

        return count;
        
    }
};



// The Trick here is n = n & (n-1) is used to remove 1 bit (one only)

/* 
 Example : -

   n = 16 (10000)

   (n-1) = 15 (01111)

   n & (n-1) = 00000 ( bit wise AND)
*/