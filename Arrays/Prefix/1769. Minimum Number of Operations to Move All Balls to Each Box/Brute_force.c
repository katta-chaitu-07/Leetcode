class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n = boxes.size(); // total number of boxes

        vector<int> operation(n,0); // total number of to get all ball at each box

        //Brute force solution

        for(int i =0; i<n; i++) //  Which box are we targeting?
        {
            int cost = 0;

            for(int j=0; j<n; j++) // Where is the ball
            {
                if(boxes[j] == '1')
                {
                    cost += abs(j - i); // calculate the cost from ball(j) to box(i)
                }
            }

            operation[i] = cost; // add the cost to the i th box 
        }

        return operation;
    }
};