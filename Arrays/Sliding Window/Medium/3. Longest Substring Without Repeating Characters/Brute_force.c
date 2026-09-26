class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // Brute force 

        int n = s.size();  // size of the s

        // case 1 :- n == 1 | 0 return n
        if(n == 0 || n == 1)
        {
            return n;
        }

        // len to track the length
        int len = INT_MIN;

        for(int i =0 ;i<n; i++)
        {
            unordered_set<int> st;

            for(int j =i; j<n; j++)
            {
                if(st.count(s[j])) // if character present 
                {
                    break; // max len without repeating , so break 
                }

                // insert if the character not present in the set
                st.insert({s[j]});

                // find the max length
                len = max(len,(j-i)+1);
            }
        }
        
        // return len
        return len;
    }
};