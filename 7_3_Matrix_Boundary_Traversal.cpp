// https://www.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/0

class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        // code here
        vector<int> ans;
        int rows = mat.size(), cols = mat[0].size();
        
        // fixing row index as 0 and traversing all the elements for that row start to end
        for(int j=0; j<cols; j++)
            ans.push_back(mat[0][j]);
        // fixing col index as m-1 and traversing all the elements for that col index 1 to end
        for(int i=1; i<rows; i++)
            ans.push_back(mat[i][cols-1]);
        // fixing row index as rows-1 and traversing all the elements in that row index cols(end)-2 to 0 
        if(rows!=1){
            for(int j=cols-2; j>=0; j--)
                ans.push_back(mat[rows-1][j]);
        }
        // fixing col index as 0 and traversing all the elements in that row index rows(end)-2 to 0
        if(cols!=1){
            for(int i=rows-2; i>0; i--)
                ans.push_back(mat[i][0]);
        }
        return ans;
        
    }
};