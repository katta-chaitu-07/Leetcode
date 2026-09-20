class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;

        //size of the vector
        int n=s.size();
        
        //left pointer 
        int i=0;

        //right pointer 
        int j=n-1;

        while(i<j)
        {

            // swap the left character and right character 
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;

            // move the left pointer forward
            i++;

            // move the rights pointer backward
            j--;
        }
        
    }
};