class Solution {
public:

   // dfs implementaion
   void dfs(int node,vector<bool>& visited,vector<vector<int>> &rooms)
   {
       // mark the current node as visited

       visited[node] = true;
        
        // explore the key/neighbour in the room 
       for(auto neighbour : rooms[node] )
       {
           // explore unvisited rooms , 
           if(!visited[neighbour])
           {
              dfs(neighbour,visited,rooms);
           }
       }
   }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
      int n = rooms.size();


      vector<bool> visited(n,false);

      dfs(0,visited,rooms);


      // check whether we visited all rooms or not 
      for(int i =0;i<n;i++)
      {

         // if any room left , return false
         if(!visited[i])
         {
            return false;
         }
      }

      // return true if we visited all rooms

      return true;
       
    }
};