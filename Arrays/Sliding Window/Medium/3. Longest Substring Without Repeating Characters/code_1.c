class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        // optimal approach

        int n = s.size(); // size of the string s

        int len = INT_MIN; // track the max substring 

        unordered_set<char> st; // set declaration to check duplicates

        // sliding window

        int left =0; // left pointer 

        for(int right = 0; right < n; right++)
        {
           
           // shrink window
            while(st.count(s[right])) // repeat until the duplicate character is removed
            {
                st.erase(s[left]); // remove the duplicate character

                left++; // move the left pointer 
            }
            
            // expand window
            st.insert(s[right]);
            
            // calculate the length of the valid window
            len = max(len,(right - left)+1);
        }

        return (len == INT_MIN)? 0 : len;
    }
};