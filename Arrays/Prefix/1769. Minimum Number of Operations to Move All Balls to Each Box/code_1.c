class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n = boxes.size(); // total number of boxes

       // stores the final answer for each box
        vector<int> result(n,0);

        //stores the total number of operations 
        int cost =0;

        // stores the total number of balls in all boxes 
        int count =0;

        // calculate the cost for box 0 (moving all balles to box 0)
        for(int i = 0; i<n; i++)
        {
            
            if(boxes[i] == '1') // if ball is find at box i
            {
                cost += abs(i -0); // calcualte the cost from box i to o

                count++; // count this ball
            }
        }

       // we found the cost for box 0 
        result[0] = cost; 
   
        // tracking the balls on the left side of target
        int left_balls = (boxes[0] == '1')? 1:0;

       // tacking the balls on right side  of target 
        int right_balls = count - left_balls;


        for(int i =1; i<n; i++) // calculate for other boxes 
        {
            // moving left to right 
            // left_balls -> cost increased by 1

            // right_balls -. cost decreased by 1
            if(boxes[i] == '1')
            {
                cost = result[i-1] +left_balls - right_balls;

                result[i] = cost;

                left_balls++;
                right_balls--;
            }
            else
            {
                cost = result[i-1] + left_balls - right_balls;

                result[i] = cost;
            }
        }
        
        //return answer for all boxes 
        return result;
    }
};