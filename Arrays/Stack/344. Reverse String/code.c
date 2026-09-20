class Solution {
public:
    void reverseString(vector<char>& s) {

        // size of the character 
        
        int n = s.size();

        // stack declaration

        stack<char> st;

        // push the character into the stack
        for(int i=0;i<n;i++)
        {
            st.push(s[i]);
        }

        //  replace the character in the vector

        for(int i=0;i<n;i++)
        {
            // the last element from the stack 
            s[i] = st.top();
            
            // pop the element after replacement
            st.pop();
        }


    // Stack follows the last in first out     


        
    }
};